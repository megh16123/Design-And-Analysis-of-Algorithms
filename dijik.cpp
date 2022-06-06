#include "../daa.h"

ii inf = 1e7;

ii main()
{
    ii n, m;
    ci n >> m;
    vi dist(n + 1, inf);
    vector<vector<pair<int, int>>> graph(n + 1);
    rep(i, 0, m)
    {
        ii u, v, w;
        ci u >> v >> w;
        graph[u].pb({v, w});
        graph[v].pb({u, w});
    }
    ii source;
    ci source;
    dist[source] = 0;
    set<pair<int, int>> s;
    s.insert({0, source});
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for (auto i : graph[x.second])
        {
            if (dist[i.first] > dist[x.second] + i.second)
            {
                s.erase({dist[i.first], i.first});
                dist[i.first] = dist[x.second] + i.second;
                s.insert({dist[i.first], i.first});
            }
        }
    }
    rep(i, 1, n + 1)
    {
        if (dist[i] < inf)
        {
            cc source << " -> " << i << " = " << dist[i] << endl;
        }
        else
        {
            cc source << " -> " << i << " = " << -1 << endl;
        }
    }
    rr;
}