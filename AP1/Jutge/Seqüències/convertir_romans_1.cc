#include <iostream>
using namespace std;

void numeros_romans(int x)
{
    int copia_x1 = x / 1000;
    int milers = copia_x1 % 10;

    if (milers == 1) {
        cout << "M";
    }
    if (milers == 2) {
        cout << "MM";
    }
    if (milers == 3) {
        cout << "MMM";
    }

    int copia_x2 = x / 100;
    int centenes = copia_x2 % 10;

    if (centenes == 1) {
        cout << "C";
    }
    if (centenes == 2) {
        cout << "CC";
    }
    if (centenes == 3) {
        cout << "CCC";
    }
    if (centenes == 4) {
        cout << "CD";
    }
    if (centenes == 5) {
        cout << "D";
    }
    if (centenes == 6) {
        cout << "DC";
    }
    if (centenes == 7) {
        cout << "DCC";
    }
    if (centenes == 8) {
        cout << "DCCC";
    }
    if (centenes == 9) {
        cout << "CM";
    }

    int copia_x3 = x / 10;
    int desenes = copia_x3 % 10;

    if (desenes == 1) {
        cout << "X";
    }
    if (desenes == 2) {
        cout << "XX";
    }
    if (desenes == 3) {
        cout << "XXX";
    }
    if (desenes == 4) {
        cout << "XL";
    }
    if (desenes == 5) {
        cout << "L";
    }
    if (desenes == 6) {
        cout << "LX";
    }
    if (desenes == 7) {
        cout << "LXX";
    }
    if (desenes == 8) {
        cout << "LXXX";
    }
    if (desenes == 9) {
        cout << "XC";
    }

    int unitats = x % 10;

    if (unitats == 1) {
        cout << "I";
    }
    if (unitats == 2) {
        cout << "II";
    }
    if (unitats == 3) {
        cout << "III";
    }
    if (unitats == 4) {
        cout << "IV";
    }
    if (unitats == 5) {
        cout << "V";
    }
    if (unitats == 6) {
        cout << "VI";
    }
    if (unitats == 7) {
        cout << "VII";
    }
    if (unitats == 8) {
        cout << "VIII";
    }
    if (unitats == 9) {
        cout << "IX";
    }
}

int main()
{

    int x;
    while (cin >> x) {

        cout << x << " = ";
        numeros_romans(x);
        cout << endl;
    }
}
