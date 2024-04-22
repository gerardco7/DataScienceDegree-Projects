#include <iostream>
#include <vector>
using namespace std;

vector<int> solucio;

struct Amic {
    int ncancion;
    vector<int> canciones;
};

bool comparator(const Amic& a, const Amic& b)
{
    return a.ncancion > b.ncancion;
}

void Escriu(int k)
{
    bool first = true;
    for (int i = 0; i < k; ++i) {
        if (first) {
            cout << solucio[i];
            first = false;
        } else {
            cout << "," << solucio[i];
        }
    }
    cout << endl;
}

void CancionAmigo(int i, int n, int m, const vector<Amic>& amics, int k, vector<bool>& utilitzat)
{
    if (i == k and AmicsContents()) {
        Escriu(k);
    } else {
        for (int j = 0; j < n; ++j) {
            if (not utilitzat[j]) {
                utilitzat[j] = true;
                solucio.push_back(j);
                CancionAmigo(i + 1, n, m, amics, k, utilitzat);
                solucio.pop_back();
                utilitzat[j] = false;
            }
        }
    }
}

int main()
{
    //nombre de cançons
    int n;
    cin >> n;

    vector<bool> utilitzat(n, false);
    //nombre d'amics
    int m;
    cin >> m;

    vector<Amic> amics(m);

    for (int i = 0; i < m; ++i) {
        cin >> amics[i].ncancion;
        for (int j = 0; j < amics[i].ncancion; ++j) {
            int cancion;
            cin >> cancion;
            amics[i].canciones.push_back(cancion);
        }
    }

    // Ordenem als amics segons el nombre de cançons que volen
    sort(amics.begin(), amics.end(), comparator);

    // caniones mácimas
    int k;
    cin >> k;

    solucio.resize(k);

    CancionAmigo(0, n, m, amics, k);
}
