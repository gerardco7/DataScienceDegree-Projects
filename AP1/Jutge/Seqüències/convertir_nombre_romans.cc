#include <iostream>
using namespace std;

int roma_valor(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
    return 0;
}

int main()
{
    char n1, n2;
    cin >> n1;

    int n = 0;
    int v1 = 0;
    int v2 = 0;

    while (cin >> n2) {
        v1 = roma_valor(n1);
        v2 = roma_valor(n2);
        if (n2 == '.') {
            n += v1;
            cout << n1 << " = " << n << endl;
            n = 0;
            v1 = 0;
            v2 = 0;
            cin >> n1;

        } else {
            if (v1 >= v2) {
                n += v1;
            } else {
                n -= v1;
            }
            cout << n1;
            n1 = n2;
        }
    }
}
