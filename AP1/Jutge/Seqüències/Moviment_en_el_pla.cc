#include <iostream>
using namespace std;

int main()
{
    char x;
    int c1 = 0;
    int c2 = 0;

    while (cin >> x) {
        if (x == 'n') {
            --c2;
        }
        if (x == 's') {
            ++c2;
        }
        if (x == 'e') {
            ++c1;
        }
        if (x == 'w') {
            --c1;
        }
    }
    cout << "(" << c1 << ", " << c2 << ")" << endl;
}
