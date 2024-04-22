#include <iostream>
#include <vector>
using namespace std;

vector<int> count;
vector<vector<int>> before;

void write(vector<int>& ordenacio)
{
    for (int i = 0; i < ordenacio.size(); ++i) {
        if (i > 0)
            cout << " ";
        cout << ordenacio[i];
    }
    cout << endl;
}

void tasques(int k, vector<int>& ordenacio)
{
    if (k == ordenacio.size())
        write(ordenacio);
    else {
        for (int i = 0; i < ordenacio.size(); ++i) {
            if (count[i] == 0) {
                --count[i]; // ~ used[i] = true
                for (int b : before[i])
                    --count[b];
                ordenacio[k] = i;
                tasques(k + 1, ordenacio);
                for (int b : before[i])
                    ++count[b];
                ++count[i];
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int r1, r2;
    for (int i = 0; i < m; ++i) {
        cin >> r1 >> r2;
        before[r1].push_back(r2);
        ++count[r2];
    }
    vector<int> ordenacio(n);
    tasques(0, ordenacio);
}
