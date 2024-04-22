#include <iostream>
using namespace std;

bool is_perfect(int n)
{
    if (n >= 2) {
        int i = 2;
        int s = 1;
        while (i * i <= n) {
            if (n % i == 0) {
                s += i + n / i;
                ++i;
            } else {
                ++i;
            }
        }
        if (s == n) {
            return true;
        }
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    if (is_perfect(n) == true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
