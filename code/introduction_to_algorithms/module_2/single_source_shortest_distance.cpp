#include <bits/stdc++.h>
using namespace std;

vector<int> adjacency_list[1005];
bool visited[1005];
int level[1005];

void bfs(int source_node)
{

    queue<int> q;
    q.push(source_node);

    visited[source_node] = true;
    level[source_node] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : adjacency_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    int src, dst;
    cin >> src >> dst;

    bfs(src);

    // single shource shortest distance
    cout << level[dst] << endl;
    return 0;
}