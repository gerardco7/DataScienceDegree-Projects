#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    double numero_a_evaluar;
    cin >> numero_a_evaluar;

    double c;
    int d = -1;
    double valor = 0;

    while (cin >> c) {
        ++d;

        valor = valor + c * pow(numero_a_evaluar, d);
    }
    cout << valor << endl;
}
