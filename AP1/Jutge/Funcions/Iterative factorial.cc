#include <iostream>
using namespace std;

int factorial(int x)
{
    int i = 2;
    int f = 1;
    if (x <= 1) {
        return 1;
    }
    while (i <= x) {
        f = f * i;
        ++i;
    }
    return f;
}
