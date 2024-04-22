#include <iostream>
using namespace std;

void producte(int n)
{
    int p = 1;
    if (n == 0) {
        p = 0;
    }
    int n1 = n;
    while (n1 >= 1) {
        p *= n1 % 10;
        n1 /= 10;
    }
    if (p <= 9) {
        cout << "The product of the digits of " << n << " is " << p << "." << endl;
    } else {
        cout << "The product of the digits of " << n << " is " << p << "." << endl;
        producte(p);
    }
}

int main()
{
    int n;
    while (cin >> n) {
        producte(n);
        cout << "----------" << endl;
    }
}
