#include <iostream>
using namespace std;

int sum_of_digits(int x)
{
    int x1 = x;
    int d = 1;

    while (x1 > 9) {
        x1 /= 10;
        ++d;
    }

    int suma = 0;
    int i = 0;
    while (i < d) {
        suma += x % 10;
        x /= 10;
        ++i;
    }

    return suma;
}

int reduction_of_digits(int x)
{
    if (sum_of_digits(x) > 9) {
        reduction_of_digits(sum_of_digits(x));
    } else {
        return sum_of_digits(x);
    }
}

int main()
{
    int x;
    cin >> x;

    cout << reduction_of_digits(x) << endl;
}
