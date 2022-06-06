#include "daa.h"

bool isCycle(ii src, ii parent)
{
    vis[src] = true;
    ff(x, adj[src])
    {
        if (x != parent)
        {
            if (vis[x])
            {
                return true;
            }
            if (!vis[x] and isCycle(x, src))
            {
                return true;
            }
        }
    }
    return false;
}
ii main()
{
    ii n, m;
    ci n >> m;
    rep(i, 0, m)
    {
        ii u, v;
        ci u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    bool cycle = false;
    rep(i, 0, n)
    {
        if (!vis[i] and isCycle(i, -1))
        {
            cycle = true;
        }
    }
    if (cycle)
    {
        cc "cycle present";
    }
    else
    {
        cc "nope";
    }
}