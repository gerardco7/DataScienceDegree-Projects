#include <iostream>
using namespace std;

bool es_primer(int x)
{
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int x;

    while (cin >> x and es_primer(x) == true) {
        int y = x + 2;
        while (es_primer(y) == false) {
            ++y;
        }
        cout << y << endl;
    }
}
