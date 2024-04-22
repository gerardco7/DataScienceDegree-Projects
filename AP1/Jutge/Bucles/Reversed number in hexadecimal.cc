#include <iostream>
using namespace std;

void reverso_hexadecimal(int n)
{
    int h = 0;
    if (n == 0) {
        cout << 0 << endl;
    } else {
        while (n > 1) {
            h = n % 16;
            n /= 16;
            if (h <= 9) {
                cout << h;
            } else if (h == 10) {
                cout << "A";
            } else if (h == 11) {
                cout << "B";
            } else if (h == 12) {
                cout << "C";
            } else if (h == 13) {
                cout << "D";
            } else if (h == 14) {
                cout << "E";
            } else if (h == 15) {
                cout << "F";
            }
        }

        if (n != 0) {
            cout << n << endl;
        } else {
            cout << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    reverso_hexadecimal(n);
}
