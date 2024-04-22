#include <iostream>
using namespace std;

double sumafraccions(int a, int b, int k)
{

    cout.setf(ios::fixed);
    cout.precision(4);

    int i = 0;
    double c = 0;
    double suma = 0;
    while (a + i * k <= b) {
        c = a + i * k;
        suma = suma + 1 / c;
        ++i;
    }
    return suma;
}
int main()
{
    int a, b, k;
    while (cin >> a >> b >> k) {
        cout << sumafraccions(a, b, k) << endl;
    }
}
