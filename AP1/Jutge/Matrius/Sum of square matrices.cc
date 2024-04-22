#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

Matrix sum(const Matrix& a, const Matrix& b)
{
    int n = a.size();
    Matrix c(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c;
}
