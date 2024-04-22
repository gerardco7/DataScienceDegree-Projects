#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int temporal;
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

void read_rational(int& num, int& den)
{
    char x;

    cin >> num >> x >> den;

    int a = gcd(num, den);
    num /= a;
    den /= a;
}

int main()
{
    int x, y;
    read_rational(x, y);

    cout << x << "/" << y << endl;
}
