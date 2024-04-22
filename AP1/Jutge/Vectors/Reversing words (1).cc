#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string word;
    while (cin >> word) {
        for (int i = 0; i < word.size() / 2; ++i) {
            int a = word[i];
            word[i] = word[word.size() - 1 - i];
            word[word.size() - 1 - i] = a;
        }
        cout << word << endl;
    }
}
