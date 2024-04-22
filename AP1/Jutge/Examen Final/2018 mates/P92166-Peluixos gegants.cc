#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        vector<int> v(3 * n);
        int suma = 0;
        for (int i = 0; i < 3 * n; ++i) {
            cin >> v[i];
            suma += v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < 3 * n; i += 3) {
            suma -= v[i];
        }
        cout << suma << endl;
    }
}
