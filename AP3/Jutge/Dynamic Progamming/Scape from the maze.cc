#include <iostream>
#include <vector>
using namespace std;

int EscapeMaze(int i, int j, const vector<vector<char>> Maze, vector<vector<int>>& S)
{

    if (i < 0 or j < 0) {
        return 0;
    }

    if (S[i][j] != -1) {
        return S[i][j];
    }

    if (Maze[i][j] == 'X') {
        return S[i][j] = 0;
    }

    if (i == 0 and j == 0) {
        return S[i][j] = 1;
    }

    S[i][j] = EscapeMaze(i - 1, j, Maze, S) + EscapeMaze(i, j - 1, Maze, S);
    if (S[i][j] >= 1e6)
        S[i][j] = 1e7;

    return S[i][j];
}

int main()
{
    int n;
    while (cin >> n) {
        int m;
        cin >> m;
        vector<vector<char>> Maze(n, vector<char>(m));

        if (n == 0 or m == 0) {
            break;
        } else {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    cin >> Maze[i][j];
                }
            }
            vector<vector<int>> S(n, vector<int>(m, -1));

            int escapemaze = EscapeMaze(n - 1, m - 1, Maze, S);
            if (escapemaze > 1e6) {
                cout << "!!!" << endl;
            } else {
                cout << escapemaze << endl;
            }
        }
    }
}
