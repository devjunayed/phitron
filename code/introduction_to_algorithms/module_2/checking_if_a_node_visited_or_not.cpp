#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];

void bfs(int source_node)
{
    queue<int> q;
    q.push(source_node);

    visited[source_node] = true;

    while (!q.empty())
    {
        // ber kore ana
        int parent = q.front();
        q.pop();

        // oi node niye kaj kora

        // children ke push kora
        for (int child : adj_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
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

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));

    int src, dst;
    cin >> src >> dst;

    bfs(src);

    if (visited[dst])
    {

        cout << "Yes" << endl;
    }
    else
    {

        cout << "No" << endl;
    }
    return 0;
}