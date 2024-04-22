#include <iostream>
using namespace std;

int main()
{
    char x;
    bool tancat = true;
    int i = 0;

    while (cin >> x and tancat) {
        if (x == '(')
            ++i;
        else
            --i;
        if (i < 0)
            tancat = false;
    }
    if (i == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
