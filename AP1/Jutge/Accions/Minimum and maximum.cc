#include <iostream>
using namespace std;

void min_max(int a, int b, int& mn, int& mx)
{

    if (a >= b) {
        mn = b;
        mx = a;
    } else {
        mn = a;
        mx = b;
    }
}
