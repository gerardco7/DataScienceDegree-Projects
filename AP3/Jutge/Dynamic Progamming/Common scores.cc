#include <iostream>
#include <vector>
using namespace std;
using Matrix = vector<vector<int>>;

int max_subsequence(int i, int j, const vector<int>& A, const vector<int>& B, Matrix& E_S)
{

    if (i >= A.size() or j >= B.size())
        return 0;

    int& res = E_S[i][j];
    if (res == -1) {
        if (A[i] == B[j])
            res = 1 + max_subsequence(i + 1, j + 1, A, B, E_S);
        else
            res = max(max_subsequence(i + 1, j, A, B, E_S), max_subsequence(i, j + 1, A, B, E_S));
    }
    return res;
}

int main()
{
    int m, n;
    while (cin >> m >> n) {
        vector<int> arthur(m);
        for (int i = 0; i < m; ++i)
            cin >> arthur[i];
        vector<int> bob(n);
        for (int i = 0; i < n; ++i)
            cin >> bob[i];
        Matrix elem_subsequence(m, vector<int>(n, -1));
        cout << max_subsequence(0, 0, arthur, bob, elem_subsequence) << endl;
    }
}
