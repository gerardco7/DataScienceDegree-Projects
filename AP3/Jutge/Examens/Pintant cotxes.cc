#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;

int INT_MAX = 1e6;

bool mes_gran(int n, int m, const vector<vector<int>>& costos, const vector<vector<int>>& y, const vector<int>& p1, const vector<int>& p2)
{
    for (int i = 0; i < n; ++i)
        if (p1[i] != p2[i]) {
            assert(not y[p1[i]].empty());
            assert(not y[p2[i]].empty());
            int k1 = y[p1[i]][0];
            int k2 = y[p2[i]][0];
            assert(k1 != k2);
            return k1 > k2;
        }
    assert(false);
    return false;
}

void optimiza(int k, int n, int m, const vector<vector<int>>& costos, const vector<vector<int>>& y, vector<int>& p, vector<int>& bp, int& c, int& bc, vector<bool>& u)
{
    if (k == n) {
        if (bc > c or (bc == c and mes_gran(n, m, costos, y, bp, p))) {
            bp = p;
            bc = c;
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (not u[i]) {
                u[i] = true;
                if (k > 0)
                    c += costos[p[k - 1]][i];
                p[k] = i;
                if (c <= bc)
                    optimiza(k + 1, n, m, costos, y, p, bp, c, bc, u);
                if (k > 0)
                    c -= costos[p[k - 1]][i];
                u[i] = false;
            }
        }
    }
}

int main()
{
    // nombre de colors
    int n;
    while (cin >> n) {
        vector<vector<int>> costos(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> costos[i][j];
            }
        }
        // nombre de cotxes
        int m;
        cin >> m;

        vector<vector<int>> y(m);
        for (int i = 0; i < m; ++i) {
            int k;
            cin >> k;
            y[k].push_back(i);
        }
        vector<int> p(n);
        vector<int> bp;
        int c = 0;
        int bc = INT_MAX;
        vector<bool> u(n, false);

        optimiza(0, n, m, costos, y, p, bp, c, bc, u);

        bool first = true;
        for (int i = 0; i < n; ++i) {
            int j = bp[i];
            for (int k : y[j]) {
                if (first)
                    first = false;
                else
                    cout << " ";
                cout << k;
            }
        }
        cout << ", amb cost: " << bc << endl;
    }
}
