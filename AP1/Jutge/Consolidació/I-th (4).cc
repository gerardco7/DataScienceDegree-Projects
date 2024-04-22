#include <iostream>
using namespace std;

int main()
{
    int n, x, i;
    bool aux;

    while (cin >> n >> x) {

        aux = false;
        i = 1;

        while (x != -1) {
            if (i == n) {
                aux = true;
                cout << "At the position " << n << " there is a(n) " << x << "." << endl;
            }
            ++i;
            cin >> x;
        }
        if (aux == false) {
            cout << "Incorrect position." << endl;
        }
    }
}
