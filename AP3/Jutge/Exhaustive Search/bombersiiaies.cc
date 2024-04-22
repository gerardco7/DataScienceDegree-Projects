#include <iostream>
#include <vector>

using namespace std;

int maxiaiesprotegides;

void protegiriaies(int k, int g, vector<int>& escoles, vector<bool>& protegida, vector<bool>& migprotegida, int iaiesprotegides)
{
    int n = escoles.size();
    if (k == g and iaiesprotegides > maxiaiesprotegides) {
        maxiaiesprotegides = iaiesprotegides;
    } else {
        for (int i = 0; i < n; ++i) {
            if (not protegida[i]) {
                if (migprotegida[i]) {
                    iaiesprotegides = iaiesprotegides - escoles[i] / 2;
                }
                protegida[i] = true;
                iaiesprotegides = iaiesprotegides + escoles[i];
                bool pro1 = false;
                if (i > 0) {
                    if (not protegida[i - 1] and not migprotegida[i - 1]) {
                        iaiesprotegides = iaiesprotegides + escoles[i - 1] / 2;
                        migprotegida[i - 1] = true;
                        pro1 = true;
                    }
                }
                bool pro2 = false;
                if (i < n - 1) {
                    if (not protegida[i + 1] and not migprotegida[i + 1]) {
                        iaiesprotegides = iaiesprotegides + escoles[i + 1] / 2;
                        migprotegida[i + 1] = true;
                        pro2 = true;
                    }
                }
                protegiriaies(k + 1, g, escoles, protegida, migprotegida, iaiesprotegides);
                protegida[i] = false;
                iaiesprotegides = iaiesprotegides - escoles[i];
                if (pro1) {
                    iaiesprotegides = iaiesprotegides - escoles[i - 1] / 2;
                    migprotegida[i - 1] = false;
                }
                if (pro2) {
                    iaiesprotegides = iaiesprotegides - escoles[i + 1] / 2;
                    migprotegida[i + 1] = false;
                }
            }
        }
    }
}

int main()
{
    int g, n;
    while (cin >> g >> n) {
        vector<int> escoles(n);
        vector<bool> protegida(n, false);
        vector<bool> migprotegida(n, false);
        int escola;
        for (int i = 0; i < n; ++i) {
            cin >> escola;
            escoles[i] = escola;
        }
        maxiaiesprotegides = 0;
        protegiriaies(0, g, escoles, protegida, migprotegida, 0);
        cout << maxiaiesprotegides << endl;
    }
}
