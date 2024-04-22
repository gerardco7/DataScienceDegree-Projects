#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a <= b) {
        cout << a;
    }

    while (a < b) {
        cout << "," << ++a;
    }
    cout << endl;
}
