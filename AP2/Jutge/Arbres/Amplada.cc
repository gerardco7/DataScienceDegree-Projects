#include <iostream>
#include <vector>
using namespace std;

struct Node;

using Tree = Node*;

struct Node {
    int x;
    Tree left;
    Tree right;

    ~Node()
    {
        delete left;
        delete right;
    }
};

Tree read_tree()
{
    int x;
    cin >> x;
    if (x == -1) {
        return nullptr;
    } else {
        Tree l = read_tree();
        Tree r = read_tree();
        return new Node { x, l, r };
    }
}

void amplada(Tree a, int p, vector<int>& amplades)
{
    if (a != nullptr) {
        ++amplades[p];
        amplada(a->left, p + 1, amplades);
        amplada(a->right, p + 1, amplades);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Tree a = read_tree();
        int p = 0;
        vector<int> amplades(100000, 0);
        amplada(a, p, amplades);
        int amax = 0;
        for (int j = 0; j < amplades.size(); ++j) {
            if (amplades[j] > amax) {
                amax = amplades[j];
            }
        }
        cout << amax << endl;
        delete a;
    }
}
