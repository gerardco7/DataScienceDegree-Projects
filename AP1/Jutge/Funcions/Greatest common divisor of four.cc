
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int temporal; //Para no perder b
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int gcd4(int a, int b, int c, int d)
{
    return gcd(gcd(gcd(a, b), c), d);
}

int main()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    cout << gcd4(x, y, a, b) << "." << endl;
}
