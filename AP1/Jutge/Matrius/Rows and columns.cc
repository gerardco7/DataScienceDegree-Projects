#include <iostream>
#include <vector>
using namespace std;
using matriu = vector<vector<int>>;

int main()
{
    int rows, cols;
    cin >> rows >> cols;
    matriu A(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];
    }
    string word;
    while (cin >> word) {
        if (word == "row") {
            int n;
            cin >> n;
            cout << word << " " << n << ":";
            n--;
            for (int i = 0; i < cols; i++) {
                cout << " " << A[n][i];
            }
            cout << endl;
        } else if (word == "column") {
            int n;
            cin >> n;
            cout << word << " " << n << ":";
            n--;
            for (int i = 0; i < rows; i++) {
                cout << " " << A[i][n];
            }
            cout << endl;
        } else {
            int a, b;
            cin >> a >> b;
            cout << word << " " << a << " " << b << ": ";
            a--;
            b--;
            cout << A[a][b] << endl;
        }
    }
}
