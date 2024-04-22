#include <iostream>
using namespace std;

void patro(int x)
{
    if (x == 1)
        cout << 1 << endl;
    else {
        patro(x - 1);
        cout << x;
        for (int i = 1; i < x; ++i) {
            cout << " " << x;
        }
        cout << endl;
        patro(x - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    patro(n);
}
