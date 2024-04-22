#include <iostream>
using namespace std;

using Fila = vector<int>;
using Matriu = vector<Fila>;

int contar(const Matriu& A, int n, int m)
{
    vector<int> u(9, false);
    for (int i = 0; i < n - 2; ++i) {
        for (int j = 0; j < m - 2; ++j) {
        }
    }
}

int main()
{
    int n, m;
    Matriu A(n, Fila(m));
    while (cin >> n >> m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> A[i][j];

            contar(A, n, m);
        }
    }
}
