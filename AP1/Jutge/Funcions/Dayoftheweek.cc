#include <iostream>
#include <string>
using namespace std;

string day_of_the_week(int d, int m, int y)
{

    int m2 = m - 2;
    int y2 = y;

    if (m2 <= 0) {
        m2 += 12;
        y2 -= 1;
    }

    int c = y2 / 100;
    int a = y2 % 100;

    int f = int(2.6 * m2 - 0.2) + d + a + int(a / 4) + int(c / 4) - 2 * c;

    if (f < 0) {
        while (f < 0) {
            f += 7;
        }
    }
    string dia;

    if (f % 7 == 0) {
        dia = "Sunday";
    } else if (f % 7 == 1) {
        dia = "Monday";
    } else if (f % 7 == 2) {
        dia = "Tuesday";
    } else if (f % 7 == 3) {
        dia = "Wednesday";
    } else if (f % 7 == 4) {
        dia = "Thursday";
    } else if (f % 7 == 5) {
        dia = "Friday";
    } else if (f % 7 == 6) {
        dia = "Saturday";
    }
    return dia;
}

int main()
{

    int d, m, y;
    cin >> d >> m >> y;

    cout << day_of_the_week(d, m, y) << endl;
}
