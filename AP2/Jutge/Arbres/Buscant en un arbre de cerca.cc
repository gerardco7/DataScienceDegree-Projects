#include <iostream>
#include <vector>
using namespace std;

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

bool bst(Tree a, int n)
{
    if (a == nullptr)
        return false;
    if (n > a->x)
        return bst(a->right, n);
    if (n < a->x)
        return bst(a->left, n);
    return true;
}

int main()
{
    int n;
    cin >> n;
    Tree a = read_tree();
    int x;
    while (cin >> x) {
        cout << x << " " << bst(a, x) << endl;
    }
    delete a;
}
