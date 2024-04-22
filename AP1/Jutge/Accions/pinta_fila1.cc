#include <iostream>
using namespace std;

void pinta_fila2(int c)
{
    int i = 1;

    while (i <= 3 + (c - 1) * 4) {

        if (i == 1 or (i - 1) % 4 == 0) {
            cout << "\\";
        }
        if (i == 2 or (i - 2) % 4 == 0) {
            cout << "_";
        }

        if (i == 3 or (i - 3) % 4 == 0) {
            cout << "/";
        }
        ++i;
    }
    cout << endl;
}

int main()
{
    int c;
    cin >> c;

    pinta_fila1(c);
}
