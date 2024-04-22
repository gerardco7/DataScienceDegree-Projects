#include <iostream>
using namespace std;

int number_of_digits(int n)
{
    if (n != 0) {
        int d = 0;
        while (n > 0) {
            n /= 10;
            ++d;
        }
        return d;
    } else {
        return 1;
    }
}

int main()
{

    int x;
    cin >> x;

    cout << number_of_digits(x) << endl;
}
