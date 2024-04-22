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

void sort3(int& a, int& b, int& c)
{
    int mn, mx;
    min_max(a, b, mn, mx);

    if (c >= mx) {
        a = mn;
        b = mx;
        c = c;

    } else if (c <= mn) {
        a = c;
        b = mn;
        c = mx;

    } else if (c >= mn and c <= mx) {
        a = mn;
        b = c;
        c = mx;
    }
}
