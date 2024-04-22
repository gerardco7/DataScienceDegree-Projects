#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            if (i % 2 == j % 2) {
                cout << '.';
            } else {
                cout << '*';
            }
        }
        cout << endl;
    }
}
