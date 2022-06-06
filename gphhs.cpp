#include <bits/stdc++.h>

using namespace std;

vector<int> gph[100009];
bool visited[100009];

void dfs(int node)
{
    visited[node] = true;
    cout << node << " ";
    for (auto a : gph[node])
    {
        if (visited[a])
            ;
        else
        {
            dfs(a);
        }
    }
}

int main()
{

    int n, m;
    cout << "Edges and vertex\n";
    cin >> n >> m;

    int x, y;
    for (int i = 0; i < m; i++)
        visited[i] = false;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        gph[x].push_back(y);
        gph[y].push_back(x);
    }
    dfs(1);
}