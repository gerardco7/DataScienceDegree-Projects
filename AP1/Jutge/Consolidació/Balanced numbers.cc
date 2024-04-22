#include <iostream>
using namespace std;

int nombredigits(int n)
{
    int d = 1;
    while (n >= 9) {
        n /= 10;
        ++d;
    }
    return d;
}

bool is_balanced(int n)
{

    int d = nombredigits(n);

    int i = 1;
    int suma_parella = 0;
    int suma_senar = 0;

    while (i <= d) {

        if (i % 2 == 1) {
            suma_senar += n % 10;
            n /= 10;
        } else {
            suma_parella += n % 10;
            n /= 10;
        }
        ++i;
    }
    if (suma_senar == suma_parella) {
        return true;
    }
    return false;
}

int main()
{
    int n;
    while (cin >> n) {
        cout << is_balanced(n) << endl;
    }
}
