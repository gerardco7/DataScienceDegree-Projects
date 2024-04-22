#include <iostream>
#include <vector>
using namespace std;

void swap2(double& a, double& b)
{
    double aux = a;
    a = b;
    b = aux;
}

void insertion_sort(vector<double>& v);
{
    int i = v.size() - 1;
    while (i > 0 and v[i] < v[i - 1]) {
        swap2(v[i], v[i - 1]);
        i--;
    }
}
