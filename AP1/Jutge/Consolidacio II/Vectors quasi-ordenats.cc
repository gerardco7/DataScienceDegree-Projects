#include <iostream>
#include <vector>
using namespace std;

void posicions(const vector<int>& V, int& e, int& d)
{
    e = 0;
    d = V.size() - 1;
    while (V[d] > V[d - 1]) {
        --d;
    }
    while (V[e] < V[e + 1]) {
        ++e;
    }
}

int main()
{
    int e, d;
    vector<int> V = { 2,
        7,
        5,
        3,
        9 };
    posicions(V, e, d);
    cout << e << " " << d << endl;
}
