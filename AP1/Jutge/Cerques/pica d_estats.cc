#include <iostream>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2;

    bool aux = false;

    while (cin >> x3 and x3 != 0 and aux == false) {
        if (x1 < x2 and x2 > x3 and x2 > 3143) {
            aux = true;
            cout << "YES" << endl;
        }
        x1 = x2;
        x2 = x3;
    }
    if (aux == false) {
        cout << "NO" << endl;
    }
}
