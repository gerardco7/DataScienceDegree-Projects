#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

void convertir_radiantes(double& grados)
{
    grados = grados * M_PI / 180;
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);

    double x;

    while (cin >> x) {
        convertir_radiantes(x);

        cout << sin(x) << " " << cos(x) << endl;
    }
}
