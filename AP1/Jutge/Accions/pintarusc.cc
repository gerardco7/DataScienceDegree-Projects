#include <iostream>
using namespace std;

void pinta_fila0(int c)
{
    int i = 1;

    while (i < 3 + (c - 1) * 4) {

        if (i == 2 or (i - 2) % 4 == 0) {
            cout << "_";
        } else {
            cout << " ";
        }
        ++i;
    }
    cout << endl;
}

void pinta_fila1(int c)
{
    int i = 1;

    while (i <= 3 + (c - 1) * 4) {

        if (i == 1 or (i - 1) % 4 == 0) {
            cout << "/";
        }
        if (i == 2 or (i - 2) % 4 == 0) {
            cout << " ";
        }

        if (i == 3 or (i - 3) % 4 == 0) {
            cout << "\\";
        }

        if (i % 4 == 0) {
            cout << "_";
        }
        ++i;
    }
    cout << endl;
}

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

        if (i % 4 == 0) {
            cout << " ";
        }
        ++i;
    }
    cout << endl;
}

void pinta_rusc(int f, int c)
{
    bool aux = false;
    while (cin >> f >> c) {
        int i = 0;

        if (aux) {
            cout << endl;
        } else {
            aux = true;
        }

        pinta_fila0(c);

        while (i < f) {

            pinta_fila1(c);
            pinta_fila2(c);
            ++i;
        }
    }
}

int main()
{
    int f, c;

    pinta_rusc(f, c);
}
