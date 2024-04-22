#include <iostream>
using namespace std;

int main()
{

    int i;
    cin >> i;

    int x;

    int j = 1;

    while (cin >> x) {
        if (j == i) {
            cout << "At the position " << i << " there is a(n) " << x << "." << endl;
            ++j;
        }
        ++j;
    }
    if (i <= 0 or i > j - 1) {
        cout << "Incorrect position." << endl;
    }
}
