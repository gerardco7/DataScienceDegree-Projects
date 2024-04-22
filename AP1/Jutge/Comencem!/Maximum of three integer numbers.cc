#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int m = 0;
    if (a > b) {
        m = a;
    } else {
        m = b;
    }
    if (c > m) {
        m = c;
    }

    cout << m << endl;
}
