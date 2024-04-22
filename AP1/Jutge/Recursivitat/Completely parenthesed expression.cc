#include <iostream>
using namespace std;

int avaluar(char c)
{
    cin >> c;
    char op, par;

    if (c == '(') {
        int x = avaluar(c);
        cin >> op;
        int y = avaluar(c);
        cin >> par;
        if (op == '+')
            return (x + y);
        if (op == '-')
            return (x - y);
        if (op == '*')
            return (x * y);
    }
    return (c - '0');
}

int main()
{
    char c;
    cout << avaluar(c) << endl;
}
