#include <iostream>
#include <vector>
using namespace std;
using Fila = vector<int>;
using Matriu = vector<Fila>;

int main()
{
    int n;
    cin >> n;
    Matriu M(n, Fila(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> M[i][j];
        }
    }

    int a, b, c;
    while (cin >> a >> b >> c) {
        bool res = true;
        cout << a << " " << b << " " << c << ":";
        for (int k = 0; k < n; ++k) {
            if (M[a][k] + M[k][b] <= c) {
                cout << " " << k;
                res = false;
            }
        }
        if (res) {
            cout << " res";
        }
        cout << endl;
    }
}
