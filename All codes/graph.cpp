#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int vertices;
    vector<vector<int>> adj_list;

public:
    Graph(int vertex)
    {
        vertices = vertex;
        adj_list.resize(vertex);
    }

    void addEdge(int node1, int node2, bool directed = false)
    {
        adj_list[node1].push_back(node2);

        if (!directed)
        {
            adj_list[node2].push_back(node1);
        }
    }

    void bfs(int startNode)
    {
        vector<bool> visited(vertices, false);
        queue<int> q;

        q.push(startNode);
        visited[startNode] = true;

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            cout << curr << " ";

            for (int neighbor : adj_list[curr])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    void dfsHelper(int node, vector<bool> &visited)
    {
        visited[node] = true;
        cout << node << " ";

        for (int neighbor : adj_list[node])
        {
            if (!visited[neighbor])
            {
                dfsHelper(neighbor, visited);
            }
        }
    }

    void dfs(int startNode)
    {
        vector<bool> visited(vertices, false);
        dfsHelper(startNode, visited);
        cout << endl;
    }
};

int main()
{
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    cout << "BFS: ";
    g.bfs(0);

    cout << "DFS: ";
    g.dfs(0);

    return 0;
}