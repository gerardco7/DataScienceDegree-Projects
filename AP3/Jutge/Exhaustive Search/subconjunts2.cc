#include <iostream>
#include <vector>
using namespace std;

vector<string> paraules;

void write(vector<string>& seq)
{
    cout << "{";
    for (int i = 0; i < seq.size(); ++i) {
        if (i == seq.size() - 1) {
            cout << seq[i] << "}" << endl;
        } else {
            cout << seq[i] << ",";
        }
    }
}

void ExhaustiveSearch(int k, vector<string>& seq)
{
    if (k == seq.size())
        write(seq);
    else {
        for (int i = 0; i < paraules.size(); ++i) {
            seq[k] = paraules[i];
            ExhaustiveSearch(k + 1, seq);
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    paraules.resize(n);
    string paraula;
    vector<string> seq(m);
    for (int i = 0; i < n; ++i) {
        cin >> paraula;
        paraules[i] = paraula;
    }

    ExhaustiveSearch(0, seq);
}
