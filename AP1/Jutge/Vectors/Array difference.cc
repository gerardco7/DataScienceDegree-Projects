#include <iostream>
#include <vector>
using namespace std;

vector<double> difference(const vector<double>& V1, const vector<double>& V2)
{
    int v1 = V1.size();
    int v2 = V2.size();
    vector<double> A(0);
    int i = 0;
    int j = 0;
    while (j < v2 and i < v1) {
        if (V1[i] > V2[j]) {
            A.push_back(V2[j]);
            j++;
            while (V2[j] == V2[j - 1]) {
                j++;
            }
        } else if (V1[i] < V2[j]) {
            A.push_back(V1[i]);
            i++;
            while (V1[i] == V1[i - 1]) {
                i++;
            }
        }
    }
    return A;
}

int main()
{
    vector<double> V1 = { 1, 2, 2, 2, 5, 5, 7 };
    vector<double> V2 = { 2, 3, 3, 7 };
    vector<double> V3 = difference(V1, V2);
    int i = 0;
    while (i < V3.size()) {
        cout << V3[i] << " ";
        cout << endl;
    }
}
