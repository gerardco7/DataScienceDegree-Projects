#include <iostream>
using namespace std;

int nombrefibonacci(int i)
{
    if (i == 1 or i == 2) {
        return 1;
    } else {
        return nombrefibonacci(i - 1) + nombrefibonacci(i - 2);
    }
}

bool fibonacci(int n, int& i)
{
    if (n == 0) {
        return false;
    }

    while (nombrefibonacci(i) <= n) {
        if (nombrefibonacci(i) == n) {
            return true;
        }
        i++;
    }
    return false;
}

int main()
{
    int n, i = 2;
    bool aux = true;
    while (cin >> n and aux == true) {
        if (fibonacci(n, i) == false) {
            aux = false;
        }
    }
    if (aux == true) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
