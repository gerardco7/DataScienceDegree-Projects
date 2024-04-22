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

void ExhaustiveSearch(int i, int n, int k, int total)
{
}

int main()
{
    int n, k;
    cin >> n >> k;
    numeros.resize(n);
    utilitzat.resize(n);
    ExhaustiveSearch(0, n, k, 0);
}
