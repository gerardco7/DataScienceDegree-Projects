#include <cmath>
#include <iostream>
using namespace std;

int conversor_binari_decimal(int& x)
{
    int a = x;
    int i = 0;

    while (a >= 1) {
        x += a % 10 * pow(2, i);
        a /= 10;
        ++i;
    }
}

void binario(char x, int& a)
{
    int a = 0;
    int i = 0;
    int b = 1;
    int j = 0;

    while (x != '|') {
        j = i;
        while (j >= 1) {
            b *= 10;
            --j;
        }
        if (x = '*') {
            a += 1 * b;
        } else {
            ++i;
        }
        ++i;
        cin >> x;
    }
}

void llegeix_hora(int& h, int& m, int& s)
{
    char x, h1, m1, s1;
    int a;
    cin >> x >> h1;
    binario(h1, a);
    h = a;
    cin >> x >> h1;
    binario(m1, a);
    m = a;
    cin >> x >> h1;
    binario(s1, a);
    s = a;

    conversor_binari_decimal(h);
    conversor_binari_decimal(m);
    conversor_binari_decimal(s);
}

void escriu_hora(int h, int m, int s)
{
    cout << h << ":" << m << ":" << s << endl;
}

int main()
{
    int n;
    cin >> n;
    char x, h, m, s;
    int i = 0;

    while (i <= n) {

        llegeix_hora(h, m, s);
        escriu_hora(h, m, s);
        ++i;
    }
}
