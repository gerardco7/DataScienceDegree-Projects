#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Programa {
    int starting;
    int finishing;
};

bool before(const Programa& p1, const Programa& p2)
{
    return p1.finishing < p2.finishing;
}

void greedy(const vector<Programa>& programes, int n)
{
    int res = 0;
    int last_f = -1;
    int i = 0;
    while (i < n) {
        while (i < n and programes[i].starting <= last_f)
            ++i;
        if (i < n) {
            ++res;
            last_f = programes[i].finishing;
        }
    }
    cout << res << endl;
}

int main()
{
    int n;
    while (cin >> n) {
        vector<Programa> programes;
        for (int i = 0; i < n; ++i) {
            int starting, finishing;
            cin >> starting >> finishing;
            programes.push_back(Programa { starting, finishing });
        }
        sort(programes.begin(), programes.end(), before);
        greedy(programes, n);
    }
}
