#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if (b <= 0) {
        cout << "b ha de ser més gran que 0" << endl;
    } else {
        cout << a / b << " " << a % b << endl;
    }
}
