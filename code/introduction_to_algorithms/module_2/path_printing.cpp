#include <bits/stdc++.h>
using namespace std;

vector<int> adjacency_list[1005];
bool visited[1005];
int level[1005];
int parent[1005];

void bfs(int source_node)
{
    queue<int> q;
    q.push(source_node);

    visited[source_node] = true;
    level[source_node] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adjacency_list[par])
        {
            if (!visited[child])
            { 
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
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
    memset(parent, -1, sizeof(parent));

    int src, dest;
    cin >> src >>dest;
    bfs(src);

    vector<int> path;
    int node  = dest;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    
    reverse(path.begin(), path.end());

    for(int x: path){
        cout << x << " ";
    }
    return 0;
}