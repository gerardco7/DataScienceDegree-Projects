#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        int espacios = n - 1;
        int n2 = n;
        while (espacios > 0) {
            int cespacios = espacios;
            while (cespacios > 0) {
                cout << " ";
                --cespacios;
            }
            int cn = n;
            while (cn > 0) {
                cout << "X";
                --cn;
            }
            cout << endl;
            --espacios;
            n += 2;
        }
        int i = n2;
        while (i > 0) {
            int cn = n;
            while (cn > 0) {
                cout << "X";
                --cn;
            }
            cout << endl;
            --i;
        }
        n -= 2;
        espacios = 1;
        while (espacios <= n - 1) {
            int cespacios = espacios;
            while (cespacios > 0) {
                cout << " ";
                --cespacios;
            }
            int cn = n;
            while (cn > 0) {
                cout << "X";
                --cn;
            }
            cout << endl;
            ++espacios;
            n -= 2;
        }
        cout << endl;
    }
}
