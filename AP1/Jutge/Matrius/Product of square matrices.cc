#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

Matrix product(const Matrix& a, const Matrix& b)
{
    int n = a.size();
    Matrix c(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}
