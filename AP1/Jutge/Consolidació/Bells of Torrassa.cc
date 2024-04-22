#include <iostream>
using namespace std;

int main()
{
    int h, m;
    while (cin >> h >> m) {
        int newh = h;
        if (h >= 12) {
            h %= 12;
        }
        if (h == 0) {
            h = 12;
        }
        if (m == 0) {
            cout << "ding ding ding ding ";
            while (h > 0) {
                cout << "dong";
                if (h > 1) {
                    cout << " ";
                }
                --h;
            }
            cout << endl;

        } else if (m % 15 == 0) {
            while (m >= 15) {
                cout << "ding";
                if (m > 15) {
                    cout << " ";
                }
                m -= 15;
            }
            cout << endl;
        } else {
            int newm = m;
            while (newm % 15 != 0) {
                ++newm;
            }
            if (newm == 60) {
                newm = 0;
                newh += 1;
                if (newh == 24) {
                    newh = 0;
                }
            }
            cout << "silence until ";
            if (newh < 10) {
                cout << "0" << newh << ":";
            } else {
                cout << newh << ":";
            }
            if (newm < 10) {
                cout << "0" << newm << endl;
            } else {
                cout << newm << endl;
            }
        }
    }
}
