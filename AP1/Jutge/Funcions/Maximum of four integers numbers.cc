#include <iostream>
using namespace std;

int max2(int x, int y)
{
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int max4(int x, int y, int z, int a)
{
    return max2(max2(max2(x, y), z), a);
}
