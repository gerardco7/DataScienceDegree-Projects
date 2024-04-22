#include <iostream>
#include <vector>
using namespace std;

vector<string> paraules;
vector<bool> contingut;

void write()
{
    bool first = true;
    cout << "{";
    for (int i = 0; i < paraules.size(); ++i) {
        if (contingut[i]) {
            if (first)
                first = false;
            else
                cout << ",";
            cout << paraules[i];
        }
    }
    cout << "}" << endl;
}

void ExhaustiveSearch(int i, int m, int n)
{
    if (m < 0)
        return;
    if (n - i < m)
        return;
    if (i == n) {
        if (m == 0)
            write();
    } else {
        contingut[i] = false;
        ExhaustiveSearch(i + 1, m, n);
        contingut[i] = true;
        ExhaustiveSearch(i + 1, m - 1, n);
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    paraules.resize(n);
    contingut.resize(n);
    string paraula;
    for (int i = 0; i < n; ++i) {
        cin >> paraula;
        paraules[i] = paraula;
    }

    ExhaustiveSearch(0, m, n);
}
