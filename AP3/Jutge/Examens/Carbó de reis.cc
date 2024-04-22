#include <iostream>
#include <vector>

using namespace std;

int n, b, a;

const int UNDEF = -1;

struct Miner {
    int p;
    int c;
    int m;
};

int optimitza(int n, int a, int b, const vector<Miner>& miners, vector<vector<vector<int>>>& M)
{
    int& res = M[n][a][b];
    if (res != UNDEF)
        return res;
    if (n == 0)
        return res = 0;
    if (miners[n - 1].c > a or miners[n - 1].m > b)
        return res = optimitza(n - 1, a, b, miners, M);
    else {
        return res = max(miners[n - 1].p + optimitza(n - 1, a - miners[n - 1].c, b - miners[n - 1].m, miners, M), optimitza(n - 1, a, b, miners, M));
    }
}

int main()
{
    while (cin >> n >> b >> a) {
        vector<Miner> miners(n);
        for (int i = 0; i < n; ++i) {
            cin >> miners[i].p >> miners[i].c >> miners[i].m;
        }
        vector<vector<vector<int>>> M(n + 1, vector<vector<int>>(a + 1, vector<int>(b + 1, UNDEF)));

        cout << optimitza(n, a, b, miners, M);
    }
}
