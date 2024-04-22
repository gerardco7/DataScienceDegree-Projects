#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);

    int x;
    cin >> x;

    string n;

    int i = 0;
    double a, b, r;
    double area = 0;
    while (cin >> n and i < x) {

        if (n == "rectangle") {
            cin >> a >> b;
            area = a * b;
        }
        if (n == "circle") {
            cin >> r;
            area = r * r * M_PI;
        }
        cout << area << endl;
        ++i;
    }
}
