#include <iostream>
using namespace std;

void factor(int n, int& f, int& q)
{
    q = 0;
    for (int i = 2; i * i <= n; ++i) {
        int q2 = 0;
        while (n % i == 0) {
            ++q2;
            n /= i;
        }
        if (q2 > q) {
            q = q2;
            f = i;
        }
    }
    if (q == 0) {
        f = n;
        q = 1;
    }
}
