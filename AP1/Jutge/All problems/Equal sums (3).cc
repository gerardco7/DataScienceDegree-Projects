#include <iostream>
#include <vector>
using namespace std;

void escriure(const vector<int>& generador, const vector<int>& v)
{
    int n = v.size();
    bool primer = true;
    cout << "{";
    for (int i = 0; i < n; ++i) {
        if (generador[i] == 1 and primer) {
            cout << v[i];
            primer = false;
        } else if (generador[i] == 1) {
            cout << "," << v[i];
        }
    }
    cout << "}" << endl;
}

void suma(const vector<int>& generador, const vector<int>& v, int s)
{
    int n = v.size();
    int suma = 0;
    int i = 0;
    while (i < n and suma <= s) {
        if (generador[i] == 1) {
            suma += v[i];
        }
        ++i;
    }

    if (suma == s) {
        escriure(generador, v);
    }
}

void generar(vector<int>& generador, int i, const vector<int>& v, int s)
{
    int n = generador.size();
    if (i == n) {
        suma(generador, v, s);
    } else {
        generador[i] = 0;
        generar(generador, i + 1, v, s);
        generador[i] = 1;
        generar(generador, i + 1, v, s);
    }
}

int main()
{
    int s;
    cin >> s;
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> generador(n);
    generar(generador, 0, v, s);
}
