#include <iostream>
using namespace std;

void pinta_fila0(int c)
{
    int i = 2;

    while (i < 4 + c * 4) {

        if (i % 4 == 0) {
            cout << "_";
        } else {
            cout << " ";
        }
        ++i;
    }
    cout << endl;
}

int main()
{
    int c;
    cin >> c;

    pinta_fila0(c);
}
