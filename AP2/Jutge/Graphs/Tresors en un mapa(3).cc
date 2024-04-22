#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
    int x, y;
};

using Grid = vector<vector<char>>;

Grid read_grid(int n, int m)
{
    Grid G(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> G[i][j];
        }
    }
    return G;
}

Node read_node()
{
    Node u;
    cin >> u.x >> u.y;
    --u.x;
    --u.y;
    return u;
}

vector<Node> neighbours(const Node& u, int n, int m)
{
    vector<Node> neighbours;
    neighbours.reserve(4);
    if (u.x > 0)
        neighbours.push_back({ u.x - 1, u.y });
    if (u.x < n - 1)
        neighbours.push_back({ u.x + 1, u.y });
    if (u.y > 0)
        neighbours.push_back({ u.x, u.y - 1 });
    if (u.y < m - 1)
        neighbours.push_back({ u.x, u.y + 1 });

    return neighbours;
}

int find_treasure(const Grid& G, Node& s)
{
    int n = G.size();
    int m = G[0].size();
    queue<Node> q;
    int treasures = 0;
    vector<vector<bool>> enq(n, vector<bool>(m, false));
    q.push(s);
    while (not q.empty()) {
        Node u = q.front();
        q.pop();
        if (G[u.x][u.y] == 't') {
            ++treasures;
            enq[u.x][u.y] = true;
        }
        for (Node v : neighbours(u, n, m)) {
            if (not enq[v.x][v.y] and G[v.x][v.y] != 'X') {
                q.push(v);
                enq[v.x][v.y] = true;
            }
        }
    }
    return treasures;
}

int main()
{
    int n, m;
    cin >> n >> m;
    Grid G = read_grid(n, m);
    Node s = read_node();
    cout << find_treasure(G, s) << endl;
}
