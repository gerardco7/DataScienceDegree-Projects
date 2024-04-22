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
    int j;
    cin >> j;

    int x;
    int i = 0;

    while (cin >> x and i <= j) {

        if (es_primer(x)) {
            cout << x << " is prime" << endl;
        } else {
            cout << x << " is not prime" << endl;
        }
        ++i;
    }
}
