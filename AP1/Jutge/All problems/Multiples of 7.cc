#include <iostream>
#include <vector>
using namespace std;

void escriure(const vector<int>& v)
{
    for (int x : v) {
        cout << x;
    }
    cout << endl;
}

void multiple(const vector<int>& v, bool& guio)
{
    int n = v.size();
    int numero = 0;
    for (int i = 0; i < n; ++i) {
        numero = (numero + v[i]) * 10;
    }
    if (numero % 7 == 0) {
        escriure(v);
        guio = false;
    }
}

void generar(vector<int>& v, vector<int>& g, vector<bool>& u, int i, bool& guio)
{
    int n = v.size();
    if (i == n) {
        multiple(v, guio);
    } else {
        for (int j = 0; j < n; ++j) {
            if (not u[j]) {
                v[i] = g[j];
                u[j] = true;
                generar(v, g, u, i + 1, guio);
                u[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> g(n);
    for (int i = 0; i < n; ++i) {
        cin >> g[i];
    }
    vector<int> v(n);
    vector<bool> u(n, false);
    bool guio = true;
    generar(v, g, u, 0, guio);

    if (guio or n == 0) {
        cout << "-" << endl;
    }
}
