#include <iostream>
using namespace std;

void potencia(int a, int b, int& resultat)
{
    while (cin >> a >> b) {

        resultat = 1;

        for (int i = 1; i <= b; ++i) {
            resultat *= a;
        }
        cout << resultat << endl;
    }
}

int main()
{

    int x, a, b, resultat;

    potencia(a, b, resultat);
}
