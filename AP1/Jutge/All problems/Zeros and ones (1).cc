#include <iostream>
#include <vector>
using namespace std;

void escriure(const vector<int>& v)
{
    bool primer = true;
    for (int x : v) {
        if (primer) {
            cout << x;
            primer = false;
        } else {
            cout << " " << x;
        }
    }
    cout << endl;
}

void generar(vector<int>& v, int i)
{
    int n = v.size();
    if (i == n) {
        escriure(v);
    } else {
        for (int j = 0; j < 2; ++j) {
            v[i] = j;
            generar(v, i + 1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    generar(v, 0);
}
