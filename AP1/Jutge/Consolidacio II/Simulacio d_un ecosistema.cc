#include <iostream>
#include <vector>
using namespace std;

using Fila = vector<Casella>;
using Matriu = vector<Fila>;

struct Casella {
    string e; // especie
    int v; // vida
};

Matriu nexteco(const Matriu& eco, int n, int m)
{
    Matriu eco2(n, Fila(m))
}

int main()
{
    int n, m;
    Matriu eco(n, Fila(m));
    while (cin >> n >> m) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> eco[i][j];
            }
        }
        bool estable = false;
        bool primer = true;
        while (not estable) {
            Matriu eco2(n, Fila(m)) = nexteco(eco, n, m);
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    if (eco[i][j] == eco2[i][j] and (estable or primer)) {
                        primer = false;
                        estable = true;
                    } else {
                        estable = false;
                    }
                    cout >> eco[i][j];
                }
                cout << endl;
            }
            cout << endl;
        }
        cout << "****************************************" << endl;
    }
}
