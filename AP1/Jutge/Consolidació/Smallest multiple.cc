#include <iostream>
using namespace std;

int main()
{
    int a, b, i, j = 1;

    while (cin >> a >> b) {
        if (a % b != 0)
            i = a + b - a % b;
        else
            i = a;

        cout << "#" << j << " : " << i << endl;
        ++j;
    }
}
