#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    int i = 0;
    int s = 0, m = 0, l = 0;
    while (x != '.') {
        if (x == '-') {
            if (i > 0 and i < 5)
                ++s;
            else if (i >= 5 and i <= 9)
                ++m;
            else if (i >= 9)
                ++l;
            i = 0;
        } else {
            ++i;
        }
        cin >> x;
    }
    if (i > 0 and i < 5)
        ++s;
    else if (i >= 5 and i <= 9)
        ++m;
    else if (i >= 9)
        ++l;
    cout << s << "," << m << "," << l << endl;
}
