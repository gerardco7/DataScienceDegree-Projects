#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<bool> utilitzatV;
vector<bool> utilitzatC;

void GenerarParaules(int n, string& consonants, string& vocals, vector<char>& paraula)
{
    if (int(paraula.size()) == 2 * n) {
        for (int i = 0; i < int(paraula.size()); ++i) {
            cout << paraula[i];
        }
        cout << endl;
    }

    else {
        if (paraula.size() % 2 == 0) {
            for (int i = 0; i < n; ++i) {
                if (not utilitzatC[i]) {
                    paraula.push_back(consonants[i]);
                    utilitzatC[i] = true;
                    GenerarParaules(n, consonants, vocals, paraula);
                    utilitzatC[i] = false;
                    paraula.pop_back();
                }
            }
        } else {
            for (int i = 0; i < n; ++i) {
                if (not utilitzatV[i]) {
                    paraula.push_back(vocals[i]);
                    utilitzatV[i] = true;
                    GenerarParaules(n, consonants, vocals, paraula);
                    utilitzatV[i] = false;
                    paraula.pop_back();
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    utilitzatC = vector<bool>(n, false);
    utilitzatV = vector<bool>(n, false);
    string consonants, vocals;
    cin >> consonants >> vocals;
    vector<char> paraula;
    GenerarParaules(n, consonants, vocals, paraula);
}
