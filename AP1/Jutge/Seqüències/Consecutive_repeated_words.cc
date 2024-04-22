#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nombre_de_repetides = 1;
    int n = 1;
    string p1, p2;
    cin >> p1;
    while (cin >> p2) {
        if (p2 == p1) {
            ++nombre_de_repetides;
            if (nombre_de_repetides > n) {
                n = nombre_de_repetides;
            }
        } else {
            nombre_de_repetides = 0;
        }
    }
    cout << n << endl;
}
