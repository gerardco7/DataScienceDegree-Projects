#include <iostream>
#include <vector>
using namespace std;

int favor, abstencio, contra;

int etotal;

vector<int> vpresident, vfavor, vabstencio, vcontra;

vector<bool> utilitzat;

void Escriu()
{
    cout << "President de";
    for (int i = 0; i < vpresident.size(), ++i) {
        cout << " " << vpresident[i];
    }
    cout << endl;
    cout << "A favor";
    for (int i = 0; i < vfavor.size(), ++i) {
        cout << " " << vfavor[i];
    }
    cout << endl;
    cout << "President de";
    for (int i = 0; i < vabstencio.size(), ++i) {
        cout << " " << vabstencio[i];
    }
    cout << endl;
    cout << "President de";
    for (int i = 0; i < vcontra.size(), ++i) {
        cout << " " << vcontra[i];
    }
    cout << endl;
    cout << endl;
}

void CercaPresident(int n, int m, const vector<int>& e, const vector<int>& p)
{
    if (contra > etotal / 2) {
        return
    }
    if (n == 0) {
        if (favor > contra) {
            Escriu();
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (not utilitzat[i]) {
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    utilitzat.resize(n);

    vector<int> e(n);
    vector<int> p(n);

    etotal = 0;

    for (int i = 0; i < n; ++i) {
        cin >> e[i] >> p[i];
        etotal += e[i];
    }

    int m;
    cin >> m;

    CercaPresident(n, m, e, p);
}
