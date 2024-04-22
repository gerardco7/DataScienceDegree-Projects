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
    vector<vector<int>> dist(n, vector<int>(m, -1));
    vector<vector<bool>> enq(n, vector<bool>(m, false));
    vector<int> treasures;
    dist[s.x][s.y] = 0;
    enq[s.x][s.y] = true;
    q.push(s);
    while (not q.empty()) {
        Node u = q.front();
        q.pop();
        if (G[u.x][u.y] == 't') {
            enq[u.x][u.y] = true;
            treasures.push_back(dist[u.x][u.y]);
        }
        for (Node v : neighbours(u, n, m)) {
            if (not enq[v.x][v.y] and G[v.x][v.y] != 'X') {
                dist[v.x][v.y] = dist[u.x][u.y] + 1;
                q.push(v);
                enq[v.x][v.y] = true;
            }
        }
    }
    if (treasures.size() != 0)
        return treasures[treasures.size() - 2];
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;
    Grid G = read_grid(n, m);
    Node s = read_node();
    int sec_max_distance = find_treasure(G, s);
    if (sec_max_distance == 0) {
        cout << "no es pot arribar a dos o mes tresors" << endl;
    } else {
        cout << "segona distancia maxima: " << sec_max_distance << endl;
    }
}
