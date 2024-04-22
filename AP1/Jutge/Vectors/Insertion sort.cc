#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<double>& v)
{
    int n = v.size();
    for (int i = 1; i < n; i++) {
        double aux = v[i];
        int j = i;
        while (j > 0 and v[j - 1] > aux) {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = aux;
    }
}
