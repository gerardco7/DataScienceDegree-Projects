#include <iostream>
using namespace std;

int main()
{
    int n, x;
    while (cin >> n) {
        int s = 0;
        int i = 1;
        while (i < n) {
            cin >> x;
            s += x;
            ++i;
        }
        int a = (n * n + n) / 2;
        int m = a - s;
        cout << m << endl;
    }
}
