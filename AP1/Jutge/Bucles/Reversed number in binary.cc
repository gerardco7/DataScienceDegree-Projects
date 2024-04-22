#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int b = 0;

    while (n > 1) {
        b = n % 2;
        n /= 2;
        cout << b;
    }

    cout << n << endl;
}
