#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n, p, k;
    cin >> n >> p >> k;
    char c;
    cin >> c;

    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    bool primer = true;
    if (c == 'd') {
        int x = p + k;
        for (int j = p + 1; j <= x; ++j) {
            if (primer) {
                cout << v[j];
                primer = false;
            } else {
                cout << " " << v[j];
            }
            if (j == n - 1 and j != x) {
                j = 0;
                cout << " " << v[j];
                x = (p + k) % n;
            }
        }
    } else {
        int x = p - k;
        for (int j = p - 1; j >= x; --j) {
            if (primer) {
                cout << v[j];
                primer = false;
            } else {
                cout << " " << v[j];
            }
            if (j == 0 and j != x) {
                j = n - 1;
                x = (p - k) % n;
                cout << " " << v[j];
            }
        }
    }
    cout << endl;
}
