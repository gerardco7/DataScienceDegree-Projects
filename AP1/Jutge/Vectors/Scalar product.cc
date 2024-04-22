#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v)
{
    double suma = 0;
    int n = u.size();
    for (int i = 0; i < n; ++i) {
        suma += u[i] * v[i];
    }
    return suma;
}
