#include <iostream>
using namespace std;

bool is_leap_year(int year)
{

    if (year % 4 == 0 and year % 100 > 0 or year % 100 == 0 and (year / 100) % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int x;
    cin >> x;

    if (is_leap_year(x) == true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
