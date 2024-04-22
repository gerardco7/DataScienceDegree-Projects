#include <iostream>
using namespace std;

bool es_primer(int n, int i)
{
    if (n >= i * i) {
        if (n % i == 0) {
            return false;
        }
        return es_primer(n, i + 1);
    }
    return true;
}

void semiprimer(int n, bool& b, int& p, int& q)
{
    int i = 2;
    b = false;
    if (not es_primer(n, i)) {
        p = 2;

        while (p * p <= n) {
            if (n % p == 0 and es_primer(p, i) and es_primer(n / p, i)) {
                b = true;
                q = n / p;
                return;
            }
            ++p;
        }
    }
}

int main()
{
    int n, p, q;
    bool b;

    while (cin >> n) {
        semiprimer(n, b, p, q);
        if (b == true) {
            cout << n << ": yes "
                 << "(" << p << "," << q << ")" << endl;
        } else {
            cout << n << ": no" << endl;
        }
    }
}
