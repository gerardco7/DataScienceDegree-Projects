#include <iostream>
using namespace std;

void conversoregipto(int x, char X)
{
    cout << "|";

    int i = 1;
    while (i <= 9) {
        if (i <= x) {
            cout << X;
        } else {
            cout << " ";
        }
        ++i;
    }
    cout << "|" << endl;
}

int main()
{
    string nom;
    int x;

    while (cin >> nom) {

        int suma = 0;
        cin >> x;

        while (x != -1) {
            suma += x;
            cin >> x;
        }
        cout << nom << endl;
        cout << "+---------+" << endl;
        if (suma / 1000000 % 10 != 0)
            conversoregipto(suma / 1000000 % 10, 'G');
        if (suma / 100000 % 10 != 0)
            conversoregipto(suma / 100000 % 10, 'F');
        if (suma / 10000 % 10 != 0)
            conversoregipto(suma / 10000 % 10, 'E');
        if (suma / 1000 % 10 != 0)
            conversoregipto(suma / 1000 % 10, 'D');
        if (suma / 100 % 10 != 0)
            conversoregipto(suma / 100 % 10, 'C');
        if (suma / 10 % 10 != 0)
            conversoregipto(suma / 10 % 10, 'B');
        if (suma % 10 != 0)
            conversoregipto(suma % 10, 'A');
        cout << "+---------+" << endl;
        cout << endl;
    }
}
