#include <iostream>
using namespace std;

void count_and_add(int& num, int& sum)
{
    int x;
    num = 0;
    sum = 0;

    while (cin >> x) {
        sum += x;
        ++num;
    }
}
