#include "../daa.h"

void dfs(ii node)
{
    cc node;
    vis[node] = true;
    ff(x, adj[node])
    {
        if (vis[x])
            ;
        else
            dfs(x);
    }
}

ii main()
{
    ii m, n;
    ci m >> n;
    rep(i, 0, m)
    {
        ii x, y;
        ci x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(1);

    rr;
}