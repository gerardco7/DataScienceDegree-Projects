#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        cout << 0 << "/" << 1 << " " << 1 << "/" << n;
        if (n > 1) {
            int p1 = 0;
            int p2 = 1;
            int q1 = 1;
            int q2 = n;
            while (q2 > 1) {
                int paux = p1;
                int qaux = q1;
                p1 = p2;
                q1 = q2;
                p2 = (n + qaux) / q1 * p1 - paux;
                q2 = (n + qaux) / q1 * q1 - qaux;
                cout << " " << p2 << "/" << q2;
            }
        }
        cout << endl;
    }
}
