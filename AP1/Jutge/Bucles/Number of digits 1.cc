#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "The number of digits of " << n;

    int d = 1;

    while (n > 9) {
        n /= 10;
        ++d;
    }
    cout << " is " << d << "." << endl;
}
