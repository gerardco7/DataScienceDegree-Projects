#include <iostream>
using namespace std;

int main()
{
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 >= a2 and b1 < b2 or a1 > a2 and b1 <= b2) {
        cout << "1" << endl;
    }
    if (a1 == a2 and b1 == b2) {
        cout << "=" << endl;
    }
    if (a1 > b1 or a2 > b2) {
        cout << "?" << endl;
    }
    if (a1 < a2 and b1 < b2) {
        cout << "?" << endl;
    }
    if (a1 > a2 and b1 > b2) {
        cout << "?" << endl;
    }
    if (a1 <= a2 and b1 > b2 or a1 < a2 and b1 >= b2) {
        cout << "2" << endl;
    }
}
