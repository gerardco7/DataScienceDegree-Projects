#include <cmath>
#include <iostream>
using namespace std;

int number_of_digits(long int n)
{
    if (n < 10) {
        return 1;
    }
    return number_of_digits(n / 10) + 1;
}

long int girar(long int n)
{
    if (n < 10) {
        return n;
    }
    return girar(n / 10) + n % 10 * pow(10, number_of_digits(n) - 1);
}

long int base(int n, int b)
{
    if (n < b) {
        return n;
    }
    return base(n / b, b) * 10 + n % b;
}

bool es_capicua(int n, int b)
{
    if (girar(base(n, b)) == base(n, b)) {
        return true;
    }
    return false;
}

int main()
{
    int n, b;
    cin >> n >> b;

    cout << es_capicua(n, b) << endl;
    cout << base(n, b) << " " << girar(base(n, b)) << " " << number_of_digits(n) << endl;
}
