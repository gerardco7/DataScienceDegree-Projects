#include <iostream>
#include <vector>
using namespace std;

void marca_fals(int i, vector<bool>& v)
{
    for (int j = 2 * i; j < int(v.size()); j += i) {
        garbell[j] = false;
    }
}

vector<bool> eratostenes(int n)
{
    vector<bool> v(n, true);
    if (n > 0)
        v[0] = false;
    if (n > 1)
        v[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (v[i])
            marca_fals(i, v);
    }
    return garbell;
}
int main()
{
    int n;
    vector<bool> garbell(n) = eratostenes(n);
    vector<int> primers(n)
}
