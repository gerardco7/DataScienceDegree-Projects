#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);

    double x;

    while (cin >> x) {
        cout << int(pow(x, 2)) << " " << sqrt(x) << endl;
    }
}
