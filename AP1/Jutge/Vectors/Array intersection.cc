#include <iostream>
#include <vector>
using namespace std;

vector<double> intersection(const vector<double>& V1, const vector<double>& V2)
{
    int v1 = V1.size();
    int v2 = V2.size();
    vector<double> A(0);
    int i = 0;
    int j = 0;
    while (j < v2 and i < v1) {
        if (V1[i] > V2[j]) {
            j++;
        } else if (V1[i] < V2[j]) {
            i++;
        } else {
            A.push_back(V1[i]);
            i++;
            j++;
            while (V1[i] == V1[i - 1]) {
                i++;
            }
            while (V2[j] == V2[j - 1]) {
                j++;
            }
        }
    }
    return A;
}
