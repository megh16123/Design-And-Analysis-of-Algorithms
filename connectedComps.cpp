#include "daa.h"

void dfs(ii node)
{
    vis[node] = true;
    cc node << " ";
    ff(x, adj[node])
    {
        if (vis[x])
        {
        }
        else
        {

            dfs(x);
        }
    }
}

ii main()
{
    ii m, n;
    ci n >> m;
    rep(i, 0, m)
    {
        ii x, y;
        ci x >> y;
        adj[x].pb(y);
        // adj[y].pb(x);
    }
    ii cnt = 1;
    dfs(1);
    rep(i, 1, n + 1)
    {
        if (!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cc endl;
    cc "Number of connected present = " << cnt;
    rr;
}