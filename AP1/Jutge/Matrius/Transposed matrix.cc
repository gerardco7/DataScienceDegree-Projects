#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

void transpose(Matrix& m)
{
    int n = m.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            int aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }
    }
}
