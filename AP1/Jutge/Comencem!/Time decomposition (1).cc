#include <iostream>
using namespace std;

// n > 0
int main()
{
    int n;
    cin >> n;

    int m, h, s, ms;

    ms = n % 3600;
    h = n / 3600;
    s = ms % 60;
    m = ms / 60;

    cout << h << " " << m << " " << s << endl;
}
