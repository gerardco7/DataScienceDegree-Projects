#include <iostream>
using namespace std;

int main()
{
    int x;
    int i = 0;

    while (cin >> x) {
        while (x != 1) {
            if (x % 2 == 0) {
                x /= 2;
            } else {
                x = 3 * x + 1;
            }
            ++i;
        }
        cout << i << endl;
        i = 0;
    }
}
