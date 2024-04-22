#include <iostream>
#include <queue>
#include <vector>
using namespace std;

using Noed = int;
using Graph = vector<vector<int>>;

Graph read_graph()
{
    int n, m;
    Graph G(n);
    for (int i = 0; i < m; ++i) {
        Node u, v;
        cin >> u >> v;
        G[u].push_back(v);
    }
    return G
}

int strongly_connected_components(const Graph& G)
{
    int scc = 0;

    return scc;
}
int main()
{
    int k;
    for (int i = 0; i < k; ++i) {
        Graph G = read_graph();
        int scc = strongly_connected_components(G);
        cout << "Graph #" << i << " has " << scc << " strongly connected component(s)." << endl;
    }
}
