#include <iostream>
using namespace std;

int base(int n, int b)
{
    if (n < b) {
        return n;
    }
    return base(n / b, b) * 10 + n % b;
}

bool three_equal_consecutive_digits(int n, int b)
{
    int a;
    bool aux = false;
    if (aux == false) {
        a = base(n, b),
        aux = true;
    }
    if (a <= 99)
        return false;
    if (a % 10 == (a / 10) % 10 and a % 10 == (a / 100) % 10)
        return true;
    a /= 10;
    three_equal_consecutive_digits(n / b, b);
}

int main()
{
    int n, b;
    cin >> n >> b;
    cout << base(n, b) << endl;
    cout << (three_equal_consecutive_digits(n, b) ? "true" : "false") << endl;
}
