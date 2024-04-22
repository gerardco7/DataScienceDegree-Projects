#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

bool is_symmetric(const Matrix& m)
{
    int n = m.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (m[i][j] != m[j][i]) {
                return false;
            }
        }
    }
    return true;
}
