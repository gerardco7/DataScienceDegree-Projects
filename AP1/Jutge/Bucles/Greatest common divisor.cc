#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int gcd;

    for (int i = 1; i <= b / 2; ++i) {
        if (a % i == 0 and b % i == 0) {
            gcd = i;
        }
    }

    cout << "The gcd of " << a << " and " << b << " is " << gcd << "." << endl;
}
