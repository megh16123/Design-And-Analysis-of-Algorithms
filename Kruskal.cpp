#include "daa.h"
vi stck(N, 0);
ii main()
{
    ii m, n, u, v, w;
    vector<vi> edges;
    rep(i, 0, m)
    {
        ci u >> v >> w;
        edges.pb({w, u, v});
    }
    sort(edges.begin(), edges.end());
    vector<vector<int>>::iterator it;
    for (auto i : edges)
    {
        int w = i[0];
        int u = i[1];
        int v = i[2];
    }
}