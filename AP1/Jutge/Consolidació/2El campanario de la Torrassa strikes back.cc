#include <iostream>
using namespace std;
int main()
{
    int h, m, t;
    while (cin >> h >> m >> t) {
        int campanades += 22 * (t / 1440);
        t %= 1440;
        h %= 12;
        while (t > 0) {
            ++m;
            if (m == 60)
                m = 0;
            ++h;
            if (h == 12)
                h = 0;
            if (m == 1 + 60 * h / 11)
                campanades++;
            t--;
        }
        cout << campanades << endl;
    }
}
