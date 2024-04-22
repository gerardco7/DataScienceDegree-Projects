#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

Matrix product(const Matrix& a, const Matrix& b)
{
    int q = b.size();
    int r = b[0].size();
    int p = a.size();
    Matrix c(p, vector<int>(r));
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < r; ++j) {
            for (int k = 0; k < q; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}
