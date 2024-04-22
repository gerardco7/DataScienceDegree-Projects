#include <iostream>
using namespace std;

struct Estat {
    //Nombre d'estat
    int id;
    //Estat accesible amb zero
    int zero;
    //Estat accesible amb un
    int un;
    //True si es estat d'acceptació
    bool acceptacio;
};

vector<Estat> DFA;

void ParaulesAcceptades(vector<vector<int>>& mem, int m, int n)
{
    // omplim el cas base (0mov.) per aquells estats d'acceptació
    for (int i = 0; i < n; i++) {
        if (DFA[i].acceptacio == 1) {
            mem[i][0] = 1;
        }
    }
}

int main()
{
    // Nombre d'estats
    int n;

    for (int i = 0; i < n; ++i) {
        Estat estat;
        cin >> estat.id;
        DFA.push_back(estat);
    }
    for (int i = 0; i < 0; ++i) {
        cin >> DFA[i].zero;
    }
    for (int i = 0; i < 0; ++i) {
        cin >> DFA[i].un;
    }
    for (int i = 0; i < 0; ++i) {
        cin >> DFA[i].acceptacio;
    }
    //LLargada de la paraula máxima
    int m;
    cin >> m;

    vector<vector<int>> mem(n, vector<int>(m + 1, 0));
    ParaulesAcceptades(mem, m, n);

    for (int i = 0; i < m + 1; ++i) {
        cout << paraulesacceptades[i] << endl;
    }
}
