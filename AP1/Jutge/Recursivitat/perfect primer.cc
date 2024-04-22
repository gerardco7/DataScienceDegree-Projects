#include <iostream>
using namespace std;

bool is_prime(int x)
{
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int sum_of_digits(int x)
{
    if (x < 9) {
        return x;
    }
    return x % 10 + sum_of_digits(x / 10);
}

bool is_perfect_prime(int x)
{
    if (is_prime(x) == true) {
        if (x < 10 or is_perfect_prime(sum_of_digits(x)) == true) {
            return true;
        }
    }
    return false;
}

int main()
{
    int x;
    cin >> x;

    if (is_perfect_prime(x) == true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
