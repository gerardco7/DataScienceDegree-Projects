#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    double numero_a_evaluar;
    cin >> numero_a_evaluar;

    double c, c1;
    cin >> c1;

    double valor = c1;

    while (cin >> c) {

        valor *= numero_a_evaluar;
        valor += c;
    }

    cout << valor << endl;
}
