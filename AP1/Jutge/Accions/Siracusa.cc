#include <iostream>
using namespace std;

void converge(int m, int& k, int& far)
{
    k = 0;
    far = 0;

    while (m != 1) {
        if (m % 2 == 0) {
            m /= 2;
        } else {
            m = 3 * m + 1;
        }
        if (m > far) {
            far = m;
        }
        ++k;
    }
    if (k == 1) {
        far = m * 2;
    }
}

int main()
{
    int m, p, k, far;
    cin >> m >> p;

    int farm = 1;
    int i = 1;
    while (i <= m) {
        converge(i, k, far);
        if (k >= p) {
            cout << i << endl;
        }
        if (far >= farm) {
            farm = far;
        }
        ++i;
    }

    cout << "The greatest reached number is " << farm << "." << endl;
}
