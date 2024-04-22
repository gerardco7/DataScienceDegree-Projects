#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    string word;
    int j = 0;
    while (j < n) {
        cin >> word;
        for (int i = 0; i < word.size() / 2; ++i) {
            int a = word[i];
            word[i] = word[word.size() - 1 - i];
            word[word.size() - 1 - i] = a;
        }
        v[j] = word;
        ++j;
    }
    for (int i = n - 1; i >= 0; --i)
        cout << v[i] << endl;
}
