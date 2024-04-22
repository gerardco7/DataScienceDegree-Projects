#include <iostream>
#include <vector>
using namespace std;

vector<char> animals;
vector<vector<char>> incompatibilitats;

int main()
{
    int n;
    char animal;
    vector<char> animals(n);
    for (int i = 0; i < n; ++i) {
        cin >> animal;
        animals[i] = animal;
    }
    int m;
    string incompatibilitat;
    vector<vector<char>> incompatibilitats(n);
    for (int i = 0; i < m; ++i) {
        cin >> incompatibilitat;
        for (int j = 0; j < n; ++j) {
            incompatibilitats[].push_back()
        }
    }
}
