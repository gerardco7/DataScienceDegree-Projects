#include <iostream>
using namespace std;

int main()
{
    int h, m, t;
    while (cin >> h >> m >> t) {
        int campanes = 484 * (t / 1440);
        t = t % 1440;
        int newm = m;
        int newh = h;
        while (t > 0) {
            if (newm == 0) {
                int cnewh = newh;
                if (cnewh % 24 != 12) {
                    if (cnewh % 24 == 0) {
                        cnewh = 12;
                    } else {
                        cnewh %= 12;
                    }
                    campanes += 4 + cnewh;
                } else {
                    campanes += 104;
                }
            }
            if (newm % 15 == 0) {
                t -= 15;
                campanes += newm / 15;
                newm += 15;
            } else {
                --t;
                newm += 1;
            }
            if (newm == 60) {
                newm = 0;
                newh += 1;
            }
        }
        cout << campanes << endl;
    }
}
