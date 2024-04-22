#include <iostream>
using namespace std;

int main()
{
    int posicio = 0;
    int x;
    bool aux = true;

    while (cin >> x and aux == true) {
        if (x % 2 == 0) {
            cout << posicio + 1 << endl;
            aux = false;
        } else {
            ++posicio;
        }
    }
}
