#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);

    double x;

    double n = 0;
    double s = 0;

    while (cin >> x) {
        s += x;
        ++n;
    }

    cout << s / n << endl;
}
