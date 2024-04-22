#include <cmath>
#include <iostream>
using namespace std;
int exponent(int n, int b)
{
    int k = 0;
    while (n / b > 0) {
        ++k;
        n /= b;
    }
    return k;
}

bool es_capicua(int n, int b)
{
    int exp = exponent(n, b);
    int i = 0;
    int copia_n = n;
    while (i <= exp) {
        int gran = pow(b, exp);
        if (n / gran == copia_n % b) {
            n %= gran;
            copia_n /= b;
            ++i;
            --exp;
        } else {
            return false;
        }
    }
    return true;
}
