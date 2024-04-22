#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    string n;
    double x0, y0, x1, y1, x2, y2;
    while (cin >> n) {
        double d = 0;
        cin >> x0 >> y0;
        x1 = x0;
        y1 = y0;
        bool aux = true;
        while (x1 != x0 or y1 != y0 or aux) {
            aux = false;
            cin >> x2 >> y2;
            d += sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
            x1 = x2;
            y1 = y2;
        }
        cout << "Route " << n << ": " << d << endl;
    }
}
