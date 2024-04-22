#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b)
{
    int max = a;
    if (b > max) {
        max = b;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    char lletra;
    int a = 0;
    int b = 0;
    int c = 0;
    for (int i = 0; i < n; ++i) {
        cin >> lletra;
        if (lletra == 'a') {
            ++a;
        } else if (lletra == 'b') {
            ++b;
        } else if (lletra == 'c') {
            ++c;
        }
    }

    int M = max(max(a, b), c);
    char x;
    if (a == M) {
        x = 'a';
    } else if (b == M) {
        x = 'b';
    } else {
        x = 'c';
    }

    cout << "majoria de " << x << endl;
    cout << M << " repeticio(ns)" << endl;
}
