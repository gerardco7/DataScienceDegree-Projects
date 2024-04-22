#include <iostream>
#include <stack>
#include <vector>
using namespace std;

using Node = int;

using Graph = vector<vector<Node>>; // Utilitzarem llistes d'adjacència ja que per graphs spare és el més eficient

Graph read_graph() // Crearem n llistes d'adjacència, una per cada node, hi haurà m arestes, per tant en total m elements entre totes les llistes d'adjacència, ja que es un graph dirigit
{
    int n, m;
    cin >> n >> m;
    Graph G(n);
    for (int i = 0; i < m; ++i) {
        Node u, v;
        cin >> u >> v;
        G[u].push_back(v);
    }
    return G;
}

bool connected(const Graph& G, Node x, Node y) //semblant a la funció explore que se'ns va presentar a les classe de teoria, però utilitzant un stack
{
    int n = G.size();
    stack<Node> p;
    //El vector boolear visited ens indicarà quan un node ja ha sigut visitat
    vector<bool> visited(n, false);
    p.push(x);
    //En la pila només hi haurà un element que anirem copiant a u i eliminant-lo, això ens permet recorrer tots els nodes adjacents, tal i com vam demostrar a classe, ens indicarà false quan no hi ha hagi cap node disponible i per cap node conectat amb x es pot anar cap a y
    while (not p.empty()) {
        Node u = p.top();
        p.pop();
        if (u == y)
            return true;

        visited[u] = true;
        for (Node v : G[u]) {
            if (not visited[v]) {
                p.push(v);
            }
        }
    }
    return false;
}

int main()
{
    Graph G = read_graph();

    Node x, y;
    cin >> x >> y;
    // Aquesta nomenclatura ens diu que si connected és cert, imprimirà yes; si fos fals, imprimirà no
    cout << (connected(G, x, y) ? "yes" : "no") << endl;
}
