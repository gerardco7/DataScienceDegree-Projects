#include <iostream>
using namespace std;

bool is_increasing(int x)
{
    if (x < 100 and x % 10 >= x / 10 % 10) {
        return true;
    } else if (is_increasing(x / 10) and x % 10 >= x / 10 % 10) {
        return true;
    }
    return false;
}

int main()
{
    int x;
    cin >> x;

    cout << is_increasing(x) << endl;
}
