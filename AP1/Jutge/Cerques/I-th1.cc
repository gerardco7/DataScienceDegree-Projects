#include <iostream>
using namespace std;

int main()
{

    int i;
    cin >> i;

    int x;
    int j = 1;
    bool aux = true;

    while (cin >> x and aux == true) {
        if (j == i) {
            cout << "At the position " << i << " there is a(n) " << x << "." << endl;
            aux = false;
        }
        ++j;
    }
}
