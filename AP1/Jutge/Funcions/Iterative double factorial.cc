#include <iostream>
using namespace std;

int double_factorial(int x)
{
    int i;
    if (x % 2 == 0) {
        i = 2;
    } else {
        i = 1;
    }

    int f = 1;
    if (x <= 1) {
        return 1;
    }
    while (i <= x) {
        f = f * i;
        ++++i;
    }
    return f;
}
