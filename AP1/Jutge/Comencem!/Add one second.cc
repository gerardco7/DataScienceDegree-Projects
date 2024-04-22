#include <iostream>
using namespace std;

void escriure_hora(int h, int m, int s)
{
    if (h < 10) {
        cout << 0;
    }
    cout << h << ":";

    if (m < 10) {
        cout << 0;
    }
    cout << m << ":";

    if (s < 10) {
        cout << 0;
    }
    cout << s << endl;
}

void sumar_un_segon(int& h, int& m, int& s)
{
    ++s;
    if (s == 60) {
        s = 0;
        ++m;
        if (m == 60) {
            m = 0;
            ++h;
            if (h == 24) {
                h = 0;
            }
        }
    }
}
int main()
{
    int h, m, s;
    cin >> h >> m >> s;

    sumar_un_segon(h, m, s);
    escriure_hora(h, m, s);
}
