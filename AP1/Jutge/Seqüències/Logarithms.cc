#include <iostream>
using namespace std;

void logaritme(int b, int n, int& resultat)
{

    while (cin >> b >> n) {
        resultat = 0;
        while (n / b >= 1) {
            n /= b;
            ++resultat;
        }
        cout << resultat << endl;
    }
}

int main()
{
    int b, n, resultat;

    logaritme(b, n, resultat);
}
