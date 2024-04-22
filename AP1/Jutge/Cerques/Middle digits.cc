
#include <iostream>
using namespace std;

int digits(int x)
{
    int d = 1;

    while (x > 9) {
        x /= 10;
        ++d;
    }
    return d;
}

int mig(int x)
{
    int y = x;
    int mig = 0;

    if (digits(x) == 1) {
        mig = x;
    } else {
        while (digits(y) > (digits(x) / 2) + 1) {
            y /= 10;
        }
        mig = y % 10;
    }
    return mig;
}

int main()
{

    int nombres;
    cin >> nombres;

    int a, b;

    cin >> a;

    bool aux = true;
    int i = 1;

    while (cin >> b and aux == true) {

        if (i % 2 == 1) {
            if (digits(a) % 2 == 0) {
                cout << "B" << endl;
                aux = false;

            } else if (digits(b) % 2 == 0) {
                cout << "A" << endl;
                aux = false;
            }

            if (mig(b) != mig(a) and aux == true) {
                cout << "A" << endl;
                aux = false;
            }
            ++i;
        } else {
            if (digits(a) % 2 == 0) {
                cout << "A" << endl;
                aux = false;

            } else if (digits(b) % 2 == 0) {
                cout << "B" << endl;
                aux = false;
            }

            if (mig(b) != mig(a) and aux == true) {
                cout << "B" << endl;
                aux = false;
            }
            ++i;
        }
        a = b;
    }
    if (aux == true) {
        cout << "=" << endl;
    }
}
