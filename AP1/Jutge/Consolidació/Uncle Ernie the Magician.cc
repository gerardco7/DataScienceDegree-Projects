#include <iostream>
using namespace std;

int main()
{
    int n;
    int resultado = 0;
    while (cin >> n) {
        resultado = ((n / 5 - 9) / 4 - 6) / 5;
        cout << resultado << endl;
    }
}
