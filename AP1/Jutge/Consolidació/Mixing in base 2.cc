#include <cmath>
#include <iostream>
using namespace std;

int exponent(int n)
{
    int k = 0;
    while (n / 2 > 0) {
        ++k;
        n /= 2;
    }
    return k;
}

int main()
{
    int x, y;
    while (cin >> x >> y) {
        int expx = exponent(x);
        while (expx >= 0) {
            int granx = pow(2, expx);
            cout << x / granx << y / granx;
            x %= granx;
            y %= granx;
            --expx;
        }
        cout << endl;
    }
}
