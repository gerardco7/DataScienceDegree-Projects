#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_palindrome(const string& s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}
