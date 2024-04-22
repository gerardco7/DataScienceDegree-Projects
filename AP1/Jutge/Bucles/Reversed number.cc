#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m = 0;

    while (n > 9) {
        m = n % 10;
        n /= 10;
        cout << m;
    }
    cout << n << endl;
}
