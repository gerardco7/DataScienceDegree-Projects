#include <iostream>
#include <vector>
using namespace std;

void escriure(const vector<string>& v)
{
    bool primer = true;
    for (string x : v) {
        if (primer) {
            cout << "(" << x;
            primer = false;
        } else
            cout << "," << x;
    }
    cout << ")" << endl;
}

void generar(vector<string>& v, vector<string>& g, int i)
{
    int n = v.size();
    if (i == n) {
        escriure(v);
    } else {
        for (int j = 0; j < n; ++j) {
            v[i] = g[j];
            generar(v, g, i + 1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> g(n);
    for (int i = 0; i < n; ++i) {
        cin >> g[i];
    }
    vector<string> v(n);
    generar(v, g, 0);
}
