#include <cmath>
#include <iostream>
using namespace std;
int sum_of_digits(int x)
{
    if (x < 9) {
        return x;
    } else {
        return x % 10 + sum_of_digits(x / 10);
    }
}

int base4(int x)
{
    int base4 = 0;
    int x2 = x;
    int i = 0;

    while (x2 >= 3) {
        if (x2 % 4 == 0) {
            x2 /= 4;
            ++i;
        } else {
            base4 += x2 % 4 * pow(10, i);
            x2 /= 4;
            ++i;
        }
    }
    return base4 += x2 * pow(10, i);
}

bool is_diabolical(int n)
{
    int sbase4 = sum_of_digits(base4(n));
    if (n % sbase4 == 0 and n >= 3)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (n != -1) {
        if (is_diabolical(n))
            ++i;
        cin >> n;
    }
    if (i < 10) {
        cout << 0 << 0 << 0 << 0 << 0 << i << endl;

    } else if (i < 100) {
        cout << 0 << 0 << 0 << 0 << i << endl;

    } else if (i < 1000) {
        cout << 0 << 0 << 0 << i << endl;

    } else if (i < 10000) {
        cout << 0 << 0 << i << endl;

    } else if (i < 100000) {
        cout << 0 << i << endl;

    } else {
        cout << i << endl;
    }
}
