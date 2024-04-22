#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int numero = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] == v[n - 1])
            numero++;
    }
    cout << numero << endl;
}
