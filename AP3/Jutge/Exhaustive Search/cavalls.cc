#include <iostream>
#include <vector>

using namespace std;

int monedas_max;

void Cavalls(int monedas, vector<vector<int>>& contenedor, vector<vector<bool>>& caballo, vector<vector<bool>>& caballoperill)
{
    if (monedas > monedas_max) {
        monedas_max = monedas;
    }

    for (int i = 0; i < contenedor.size(); ++i) {
        for (int j = 0; j < contenedor[0].size(); ++j) {
            if (caballo[i][j] == false and caballoperill[i][j] == false) {
                caballo[i][j] = true;
                if (i - 2 >= 0 and j + 1 < contenedor[0].size())
                    caballoperill[i - 2][j + 1] = true;
                if (i - 1 >= 0 and j + 2 < contenedor[0].size())
                    caballoperill[i - 1][j + 2] = true;
                if (i + 1 < contenedor.size() and j + 2 < contenedor[0].size())
                    caballoperill[i + 1][j + 2] = true;
                if (i + 2 < contenedor.size() and j + 1 < contenedor[0].size())
                    caballoperill[i + 2][j + 1] = true;
                if (i - 2 >= 0 and j - 1 >= 0)
                    caballoperill[i - 2][j - 1] = true;
                if (i - 1 >= 0 and j - 2 >= 0)
                    caballoperill[i - 1][j - 2] = true;
                if (i + 1 < contenedor.size() and j - 2 >= 0)
                    caballoperill[i + 1][j - 2] = true;
                if (i + 2 < contenedor.size() and j - 1 >= 0)
                    caballoperill[i + 2][j - 1] = true;
                monedas = monedas + contenedor[i][j];
                Cavalls(monedas, contenedor, caballo, caballoperill);
                caballo[i][j] = false;
                if (i - 2 >= 0 and j + 1 < contenedor[0].size())
                    caballoperill[i - 2][j + 1] = false;
                if (i - 1 >= 0 and j + 2 < contenedor[0].size())
                    caballoperill[i - 1][j + 2] = false;
                if (i + 1 < contenedor.size() and j + 2 < contenedor[0].size())
                    caballoperill[i + 1][j + 2] = false;
                if (i + 2 < contenedor.size() and j + 1 < contenedor[0].size())
                    caballoperill[i + 2][j + 1] = false;
                if (i - 2 >= 0 and j - 1 >= 0)
                    caballoperill[i - 2][j - 1] = false;
                if (i - 1 >= 0 and j - 2 >= 0)
                    caballoperill[i - 1][j - 2] = false;
                if (i + 1 < contenedor.size() and j - 2 >= 0)
                    caballoperill[i + 1][j - 2] = false;
                if (i + 2 < contenedor.size() and j - 1 >= 0)
                    caballoperill[i + 2][j - 1] = false;
                monedas = monedas - contenedor[i][j];
            }
        }
    }
}

int main()
{
    int n, m;
    while (cin >> n >> m) {
        vector<vector<int>> contenedor(n, vector<int>(m));
        vector<vector<bool>> caballo(n, vector<bool>(m, false));
        vector<vector<bool>> caballoperill(n, vector<bool>(m, false));
        int monedas;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> monedas;
                contenedor[i][j] = monedas;
            }
        }
        monedas_max = 0;
        Cavalls(0, contenedor, caballo, caballoperill);
        cout << monedas_max << endl;
    }
}
