#include <iostream>
using namespace std;

void escriu_triangle(int t)
{
    int espais = 2 * t - 2;
    int e;
    int j = 1;
    while (j <= t) {

        e = 0;
        while (e < espais) {
            cout << " ";
            ++e;
        }

        for (int i = 0; i < j; ++i) {
            cout << " /\\";
            if (j - i != 1) {
                cout << " ";
            }
        }

        cout << endl;
        e = 0;
        while (e < espais) {
            cout << " ";
            ++e;
        }

        for (int i = 0; i < j; ++i) {
            cout << "/__\\";
        }

        cout << endl;
        ++j;
        espais -= 2;
    }
}

int main()
{
    int t;
    bool aux = false;
    while (cin >> t) {
        if (aux) {
            cout << endl;
        }
        escriu_triangle(t);
        aux = true;
    }
}
