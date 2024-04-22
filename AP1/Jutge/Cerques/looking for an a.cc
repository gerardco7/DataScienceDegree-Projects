#include <iostream>
using namespace std;

int main()
{
    int n_a = 0;
    char c;
    bool aux = true;

    while (cin >> c and aux == true) {
        if (c == 'a') {
            ++n_a;
            aux = false;
        }
    }
    if (n_a == 1) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
