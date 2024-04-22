#include <cmath>
#include <iostream>
using namespace std;

int nombredigits(int n)
{
    int d = 1;
    while (n > 9) {
        n /= 10;
        ++d;
    }
    return d;
}

bool es_strobogrammatic(int x)
{
    int d = nombredigits(x);
    int i = 1;

    while (x > 9) {

        if ((x % 10 == 0 or x % 10 == 1 or x % 10 == 8) and (x % 10 == x / int(pow(10, d - i)))) {
            x -= x / int(pow(10, d - i)) * pow(10, d - i);
            x /= 10;
            i += 2;

        } else if ((x % 10 == 6 or x % 10 == 9) and (x % 10 + x / int(pow(10, d - i)) == 15)) {
            x %= int(pow(10, d - i));
            x /= 10;
            i += 2;

        } else {
            return false;
        }
    }

    if (x == 0 or x == 1 or x == 8) {
        return true;
    }
    return false;
}

int main()
{
    int x, j = 0;

    while (cin >> x) {
        if (es_strobogrammatic(x)) {
            cout << x << " is strobogrammatic" << endl;
            if (x % 2 == 1) {
                ++j;
            }
        } else {
            cout << x << " is not strobogrammatic" << endl;
        }
    }
    cout << endl;
    cout << "odd strobogrammatic: " << j << endl;
}
