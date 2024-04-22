#include <iostream>
using namespace std;

int double_factorial(int n)
{
    if (n == 1 or n == 0) {
        return 1;
    } else {
        return n * double_factorial(n - 2);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << double_factorial(n) << endl;
}
