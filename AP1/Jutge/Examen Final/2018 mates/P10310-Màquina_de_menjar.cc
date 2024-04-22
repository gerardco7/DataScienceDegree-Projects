#include <iostream>
#include <vector>
using namespace std;

void menjar(vector<int>& v, int& j, vector<int>& f)
{
    bool menjat = false;
    while (not menjat) {
        int m = v.size();
        for (int i = 0; i < m; ++i) {
            if (v[i] >= f[j] and not menjat) {
                v[i] -= f[j];
                menjat = true;
                ++j;
                f.push_back(f[j - 1] + f[j - 2]);
            }
        }
        if (not menjat)
            --j;
    }
}

int main()
{
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int j = 2;
        bool acabat = false;
        vector<int> f = { 0, 1, 1 };
        vector<int> acabar(n, 0);
        while (not acabat) {
            menjar(v, j, f);
            if (v == acabar) {
                acabat = true;
            }
            bool primer = true;
            for (int i = 0; i < n; ++i) {
                if (primer) {
                    cout << v[i];
                    primer = false;
                } else {
                    cout << " " << v[i];
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
