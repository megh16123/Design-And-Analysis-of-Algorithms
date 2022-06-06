#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Transpose of Adjacency List
void transpose(vector<int> adj[], int V)
{

    vector<int> transGraph[V];

    for (int u = 0; u < V; u++)
    {
        for (auto v : adj[u])
        {
            transGraph[v].push_back(u);
        }
    }
    cout << "This is Transpose Graph " << endl;
    printList(transGraph, V);
}

void printList(vector<int> list[], int V)
{
    for (int u = 0; u < V; u++)
    {
        cout << "|" << u << "|----->";
        for (auto v : list[u])
        {
            cout << v << "---->";
        }
        cout << endl;
    }
}
int main()
{
    int V;
    int E;

    cout << "Enter the number of the Vertex : " << endl;
    cin >> V;

    cout << "Enter the number of the Edges : " << endl;
    cin >> E;

    vector<int> adj[V];
    bool visited[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < E; i++)
    {
        int src, dest;
        cout << "Enter the Source vertex : ";
        cin >> src;

        cout << "Enter the destination Vertex : ";
        cin >> dest;

        adj[src].push_back(dest);
        // adj[dest].push_back(src);
    }
    cout << "This is Normal Graph ";
    printList(adj, V);
    transpose(adj, V);

    return 0;
}