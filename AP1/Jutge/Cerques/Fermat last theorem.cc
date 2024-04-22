#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = a;
    bool aux = false;

    while (x <= b and aux == false) {
        int y = c;
        while (y <= d and aux == false) {
            int z = sqrt(x * x + y * y);

            if (x * x + y * y == z * z) {
                cout << x << "^2 + " << y << "^2 = " << z << "^2" << endl;
                aux = true;
            }
            ++y;
        }
        ++x;
    }
    if (aux == false) {
        cout << "No solution!" << endl;
    }
}
