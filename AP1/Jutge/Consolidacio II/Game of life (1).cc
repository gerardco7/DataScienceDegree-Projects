#include <iostream>
#include <vector>
using namespace std;
using Fila = vector<char>;
using Matrix = vector<Fila>;

Matrix nextmove(const Matrix& A)
{
    Matrix B = A;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < c; ++j) {
            if (A[i][j] == '.') {
                if ()
            }
        }
    }
}

int main()
{
    int n, c;
    Matrix A(n, Fila(c));

    while (cin >> n >> c) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> A[i][j];
            }
        }
        nextmove(A)
    }
}
