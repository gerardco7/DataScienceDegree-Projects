#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y)
{
    int n = 0;
    int x = X.size();
    int y = Y.size();
    int i = 0;
    int j = 0;

    while (i < x) {
        while (j < y) {
            if (X[i] > Y[j] and j != y - 1) {
                ++j;
            } else if (X[i] < Y[j] and j != 0) {
                ++i;
                --j;
            } else if (X[i] < Y[j]) {
                ++i;
            } else if (X[i] == Y[j] and j != y - 1 and i != x - 1) {
                ++i;
                ++j;
                ++n;
            }
        }
    }

    return n;
}

int main()
{
    vector<int> a = { 1, 2, 4, 5, 7 };
    vector<int> b = { 3,
        5,
        6,
        7 };
    cout << common_elements(a, b);
}
