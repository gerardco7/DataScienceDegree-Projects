#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    if (t < 10) {
        cout << "it's cold" << endl;
        if (t <= 0) {
            cout << "water would freeze" << endl;
        }
    }
    if (10 <= t and t <= 30) {
        cout << "it's ok" << endl;
    }
    if (t > 30) {
        cout << "it's hot" << endl;
        if (t >= 100) {
            cout << "water would boil" << endl;
        }
    }
}
