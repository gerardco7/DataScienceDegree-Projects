#include <iostream>
#include <vector>

using namespace std;

vector<int> numeros;
vector<bool> utilitzat;

void write()
{
    bool first = true;
    cout << "(";
    for (int i = 0; i < numeros.size(); ++i) {
        if (first)
            first = false;
        else
            cout << ",";
        cout << numeros[i];
    }
    cout << ")" << endl;
}

bool bucle(int k, int n)
{
    int bucleindex = k;
    while (bucleindex != -1) {
        bucleindex = numeros[bucleindex - 1];
        if (bucleindex == k) {
            return true;
        }
    }
    return false;
}

void ExhaustiveSearch(int k, int n)
{
    if (k == n) {
        write();
    }

    else if (k != 0) {
        if (bucle(k, n)) {
            return;
        }
    }

    if (k < n) {
        for (int i = 0; i < n; ++i) {
            if (k != i and not utilitzat[i]) {
                numeros[k] = i + 1;
                utilitzat[i] = true;
                ExhaustiveSearch(k + 1, n);
                numeros[k] = -1;
                utilitzat[i] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    numeros.resize(n);
    for (int i = 0; i < n; ++i) {
        numeros[i] = -1;
    }
    utilitzat.resize(n);
    if (n == 1) {
        cout << "(" << 1 << ")" << endl;
    } else {
        ExhaustiveSearch(0, n);
    }
}
