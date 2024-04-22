#include <iostream>
using namespace std;

int main()
{
    int n_a = 0;
    char c;

    while (cin >> c and c != '.') {
        if (c == 'a') {
            ++n_a;
        }
    }

    cout << n_a << endl;
}
