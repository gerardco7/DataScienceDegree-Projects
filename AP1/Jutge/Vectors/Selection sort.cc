#include <iostream>
#include <vector>
using namespace std;

void swap2(double& a, double& b)
{
    double aux = a;
    a = b;
    b = aux;
}

void selection_sort(vector<double>& v, int m)
{
    for (int i = 0; i <= m; i++) {
        int compt = i;
        for (int j = i + 1; j <= m; j++) {
            if (v[j] < v[compt])
                compt = j;
        }
        swap2(v[compt], v[i]);
    }
}
