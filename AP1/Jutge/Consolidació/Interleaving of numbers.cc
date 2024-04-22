#include <cmath>
#include <iostream>
using namespace std;

int exponent(int n)
{
    int k = 0;
    while (n / 10 > 0) {
        ++k;
        n /= 10;
    }
    return k;
}

int main()
{
    int x, y;
    while (cin >> x >> y) {
        if (x != 0) {
            int expx = exponent(x);
            while (expx >= 0) {
                int granx = pow(10, expx);
                cout << x / granx << y / granx;
                x %= granx;
                y %= granx;
                --expx;
            }
        } else {
            cout << y;
        }
        cout << endl;
    }
}
