#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        int k = 0;
        int max = 0;
        int aux;
        vector<bool> u(n, false);
        for (int i = 0; i < n; ++i) {
            aux = i;
            while (not u[i]) {
                ++k;
                u[i] = true;
                i = p[i] - 1;
            }
            i = aux;
            if (k > max) {
                max = k;
            }
            k = 0;
        }
        cout << max << endl;
    }
}
