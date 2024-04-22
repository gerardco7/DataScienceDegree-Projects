#include <iostream>
#include <vector>
using namespace std;

vector<double> merge(const vector<double>& V1, const vector<double>& V2)
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
        } else {
            A.push_back(V1[i]);
            i++;
        }
    }
    while (j < v2) {
        A.push_back(V2[j]);
        j++;
    }
    while (i < v1) {
        A.push_back(V1[i]);
        i++;
    }
    return A;
}
