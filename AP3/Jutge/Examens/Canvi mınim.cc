#include <iostream>
#include <vector>
using namespace std;
const int oo = 1e5;
const int UNDEF = −1;

// Retorna el mínim nombre de monedes dels tipus 0...i que sumen canvi c
int minim(int i, int c, const vector<int>& m, vector<vector<int>>& t)
{
    if (c < 0)
        return +oo;
    if (i < 0) {
        if (c == 0) {
            return 0;
        } else {
            return oo;
        }
    }

    int& res = t[i][c];
    if (res != UNDEF)
        return res;
    return res = min(minim(i−1, c, m, t), 1 + minim(i, c − m[i], m, t));
}
int main()
{
    int c, n;
    while (cin >> c >> n) {
        vector<int> m(n);
        for (int& mi : m)
            cin >> mi;
        vector<vector<int>> t(n, vector<int>(c + 1, UNDEF));
        int res = minim(n−1, c, m, t);
        if (res == +oo)
            cout << "no" << endl;
        else
            cout << res << endl;
    }
}
