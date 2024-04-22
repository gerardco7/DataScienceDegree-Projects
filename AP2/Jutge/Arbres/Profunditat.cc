#include <iostream>
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

int profundidad(Tree a, int p)
{
    int pmax = p;
    if (a != nullptr) {
        int x = profundidad(a->left, p + 1);
        int y = profundidad(a->right, p + 1);
        if (x > y) {
            pmax = x;
        } else {
            pmax = y;
        }
    }
    return pmax;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Tree a = read_tree();
        int p = 0;
        cout << profundidad(a, p) << endl;
        delete a;
    }
}
