#include <iostream>
using namespace std;

int sum_of_digits(int x)
{
    if (x < 9) {
        return x;
    } else {
        return x % 10 + sum_of_digits(x / 10);
    }
}

bool is_multiple_3(int x)
{
    if (sum_of_digits(x) % 3 == 0) {
        return true;
    }
    return false;
}

int main()
{
    int x;
    cin >> x;

    if (is_multiple_3(x) == true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
