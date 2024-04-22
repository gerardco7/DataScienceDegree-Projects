#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Moli {
    //Autonomia
    int u;
    //Producxtivitat
    double p;
    //Consum
    double c;
    //relacio
    double r;
};

bool comparator(const Moli& a, const Moli& b)
{
    return a.r > b.r;
}

double ConsumMinim(const vector<Moli>& Molins, int d)
{
    double consum = 0;
    double farina = 0;
    int i = 0;
    while (farina + Molins[i].p * Molins[i].u < d) {
        consum += Molins[i].c * Molins[i].u;
        farina += Molins[i].p * Molins[i].u;
        ++i;
    }

    double farinafalta = d - farina;
    double horesfalten = farinafalta / Molins[i].p;
    consum += horesfalten * Molins[i].c;

    return consum;
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    while (cin >> n) {
        vector<Moli> Molins(n);
        for (int i = 0; i < n; ++i) {
            cin >> Molins[i].u;
        }
        for (int i = 0; i < n; ++i) {
            cin >> Molins[i].p;
        }
        for (int i = 0; i < n; ++i) {
            cin >> Molins[i].c;
        }
        for (int i = 0; i < n; ++i) {
            Molins[i].r = Molins[i].p / Molins[i].c;
        }

        sort(Molins.begin(), Molins.end(), comparator);
        //Demanda de farina
        int d;
        cin >> d;
        cout << ConsumMinim(Molins, d) << endl;
    }
}
