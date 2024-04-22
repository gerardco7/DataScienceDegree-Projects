#include <iostream>
using namespace std;

double factorial(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, i;
    double e;

    while (cin >> n) {

        i = 0;
        e = 0;

        if (n >= 1) {
            while (i < n) {
                e += 1 / factorial(i);
                ++i;
            }
        }
        cout << "With " << n << " term(s) we get " << e << "." << endl;
    }
}
