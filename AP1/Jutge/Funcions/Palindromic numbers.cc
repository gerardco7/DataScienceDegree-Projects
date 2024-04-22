#include <iostream>
using namespace std;

int girar_nombre(int n)
{
    int m = 0;
    while (n > 0) {
        m = m * 10 + (n % 10);
        n /= 10;
    }
    return m;
}

bool is_palindromic(int n)
{
    if (girar_nombre(n) == n) {
        return true;
    }
    return false;
}

int main()
{
    int x;
    cin >> x;

    if (is_palindromic(x)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
