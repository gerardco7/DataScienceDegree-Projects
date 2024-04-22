#include <iostream>
using namespace std;

bool son_complementaris(int x, int y, int b)
{
    if (x <= b and y <= b and x >= 1 and y >= 1) {
        if (x + y == b - 1)
            return true;
        else
            return false;
    } else if (x % b + y % b == b - 1)
        return son_complementaris(x / b, y / b, b);
    return false;
}

int main()
{
    cout << son_complementaris(1, 9998, 10) << endl;
}
