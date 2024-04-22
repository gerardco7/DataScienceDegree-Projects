#include <iostream>
#include <vector>

using namespace std;

static const int UNDEF = -1;
static const int MAX = 67;

long int paraules(int n, vector<long int>& M)
{

    if (M[n] != UNDEF)
        return M[n];

    if (n == 0) {
        M[n] = 1;
        return 1;
    } else {
        long int s = 0;
        for (int i = 2; i <= n; ++i)
            s += paraules(i - 2, M) * paraules(n - i, M);
        M[n] = s;
        return s;
    }
}

int main()
{
    int n;
    vector<long int> M(MAX + 1, UNDEF);
    while (cin >> n)
        cout << paraules(n, M) << endl;
}
