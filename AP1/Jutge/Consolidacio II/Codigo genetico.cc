#include <iostream>
#include <vector>
using namespace std;

string identificargenoma(const string& genoma, int i)
{
    bool acabat = false : while (i < genoma.size() - 3 and not acabat)
    {
    }
}

int main()
{
    string genoma;
    cin >> genoma;

    int i = 0;
    bool comencat = false;
    while (i < genoma.size() - 3 and not comencat) {
        if (genoma[i] = 'A' and genoma[i + 1] = 'U' and genoma[i + 2] = 'G') {
            comencat = true;
            i += 3;
        } else {
            ++i;
        }
    }
    identificargenoma(genoma, i);
}
