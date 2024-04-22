#include <iostream>
using namespace std;

void nombre_de_digits(int x, int& d)
{
    d = 1;
    while (x > 9) {
        x /= 10;
        ++d;
    }
}
void suma_de_xifres(int& num, int x, int d, int& suma)
{

    while (cin >> x) {
        num = x;
        suma = 0;
        nombre_de_digits(x, d);

        int i = 0;
        while (i < d) {
            suma += x % 10;
            x /= 10;
            ++i;
        }
        cout << "The sum of the digits of " << num << " is " << suma << "." << endl;
    }
}

int main()
{

    int num, x, d, suma;

    suma_de_xifres(num, x, d, suma);
}
