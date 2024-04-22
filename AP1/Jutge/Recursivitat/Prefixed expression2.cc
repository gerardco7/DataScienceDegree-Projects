#include <iostream>
using namespace std;

int max2(int x, int y)
{
    if (x > y) {
        return x;
    }
    return y;
}

int max3(int x, int y, int z)
{
    return max2(x, max2(y, z));
}

int avaluar(char& c)
{
    cin >> c;

    if (c == 'm')
        return max3(avaluar(c), avaluar(c), avaluar(c));
    else if (c == '+')
        return avaluar(c) + avaluar(c);
    else if (c == '-')
        return -1 * avaluar(c);
    else
        return c - '0';
}

int main()
{
    char c;
    cout << avaluar(c) << endl;
}
