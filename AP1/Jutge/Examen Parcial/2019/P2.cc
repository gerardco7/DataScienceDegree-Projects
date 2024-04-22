#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word1, word2;
    cin >> word1 >> word2;

    while (word2 != "END" and word1 != "END") {
        if (word2 > word1) {
            cout << word1 << endl;
            word1 = word2;
            cin >> word2;
        } else {
            cout << word2 << endl;
            word2 = word1;
            cin >> word1;
        }
    }
    if (word2 == "END") {
        cout << word1 << endl;
    } else {
        cout << word2 << endl;
    }
}
