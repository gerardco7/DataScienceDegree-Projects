#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    bool aux = false;

    while (cin >> a >> b >> c >> d and aux == false) {

        if (a == 0) {
            cout << a << "^3 + " << c << "^3 = " << c << "^3" << endl;
            aux = true;
        } else if (c == 0) {
            cout << a << "^3 + " << c << "^3 = " << a << "^3" << endl;
            aux = true;
        }
    }

    if (aux == false) {
        cout << "No solution!" << endl;
    }
}
