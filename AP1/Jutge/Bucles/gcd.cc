
#include <iostream>
using namespace std;

int maximo_comun_divisor(int a, int b)
{
    int temporal; //Para no perder b
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "The gcd of " << x << " and " << y << " is " << maximo_comun_divisor(x, y) << "." << endl;
}
