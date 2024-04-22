#include <iostream>
#include <vector>
using namespace std;

vector<int> numeros;
vector<int> utilitzat;

void write()
{
    bool first = true;
    cout << "{";
    for (int i = 0; i < numeros.size(); ++i) {
        if (utilitzat[i]) {
            if (first)
                first = false;
            else
                cout << ",";
            cout << numeros[i];
        }
    }
    cout << "}" << endl;
}

void ExhaustiveSearch(int i, int suma, int s, bool new1)
{
    if (suma == s and new1)
        write();
    if (i < numeros.size()) {
        utilitzat[i] = true;
        ExhaustiveSearch(i + 1, suma + numeros[i], s, true);
        utilitzat[i] = false;
        ExhaustiveSearch(i + 1, suma, s, false);
    }
}

int main()
{
    int s, n;
    cin >> s >> n;
    int numero;
    numeros.resize(n);
    utilitzat.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> numero;
        numeros[i] = numero;
    }
    ExhaustiveSearch(0, 0, s, true);
}
