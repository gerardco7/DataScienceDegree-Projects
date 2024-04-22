#include <iostream>
#include <queue>
#include <vector>
using namespace std;

using Node = int;
using Graph = vector<vector<int>>;
using Capacity = int;

struct Wire {
    Node node;
    Capacity capacity;
};

bool read_graph(Graph& G)
{
    int n, m;
    if (not(cin >> n >> m))
        return false;
    G = Graph(n);
    for (int i = 0; i < m; ++i) {
        Node u, v;
        int c;
        G[u].push_back({ v, c });
    }
    return true;
}

int maximum_amount_electrcity(const Graph& G)
{
    int mae = 0;

    return mae;
}

int main()
{
    Graph G;
    while (read_graph(G)) {
        cout << maximum_amount_electrcity(G) << endl;
    }
}
