#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(10);

    double n, m;
    double h = 0;
    double a = 0;

    while (cin >> n >> m) {
        if (m == 0) {
            m = 1;
            n = n + 1;
            while (m < n) {
                h = h + 1 / m;
                ++m;
            }
        } else {
            if (m > n) {
                a = m;
                m = n;
                n = a;
            }

            while (m < n) {
                h = h + 1 / (m + 1);
                ++m;
            }
        }
        cout << h << endl;
        h = 0;
    }
}
