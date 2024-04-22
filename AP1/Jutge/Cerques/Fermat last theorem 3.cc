#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {

        int x = a;
        int n = 0;

        while (x <= b) {
            int y = c;
            while (y <= d) {
                int z = sqrt(x * x + y * y);

                if (x * x + y * y == z * z) {
                    ++n;
                }
                ++y;
            }
            ++x;
        }
        cout << n << endl;
    }
}
