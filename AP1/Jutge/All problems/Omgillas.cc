#include <iostream>
#include <vector>
using namespace std;

int generar(const vector<int>& m, vector<bool>& u, int c, int v, int i)
{
    int n = 0;
    if (i == 10) {
        ++n;
    }
}
int main()
{
    int n;
    cin >> n;
    int c, v;
    vector<int> m = { 2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29 };
    for (int i = 0; i < n; ++i) {
        cin >> c >> v;
        vector<bool> u(10);
        generar(m, u, c, v, 0)
    }
}
