#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int c = a;
    if (a > b) {
        a = b;
        b = c;
    }
    cout << b << endl;
    while (a < b) {
        cout << --b << endl;
    }
}
