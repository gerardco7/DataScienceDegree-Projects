#include <iostream>
#include <vector>
using namespace std;
struct Persona {
    string nom;
    bool dona;
    int edat;
};

int main()
{
    int n;
    cin >> n;
    Persona p;
    vector<Persona> persones(n);
    for (int i = 0; i < n; ++i) {
        cin >> persones[i];
    }
    vector<Persona> homes;
    int j = 0;
    for (int i = 0; i < n, ++i) {
        if (not persones[i].dona) {
            homes[j] = persones[i];
            ++j;
        }
    }
}
