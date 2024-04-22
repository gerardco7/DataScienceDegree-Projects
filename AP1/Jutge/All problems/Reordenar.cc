#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    vector<int> m(n);
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
    }

    vector<int> v(n);
    bool primer = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (m[j] == i and primer) {
                cout << s[j];
                primer = false;
            } else if (m[j] == i) {
                cout << " " << s[j];
            }
        }
    }
    cout << endl;
}
