#include "../daa.h"

void dfs(ii node)
{
    vis[node] = true;
    cc node;
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
    ii m, n, count = 0;
    ci m >> n;
    rep(i, 0, m)
    {
        ii x, y;
        ci x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    rep(i, 1, n)
    {
        if (!vis[i])
        {
            dfs(i);
            count++;
            cc endl;
        }
    }
    cc "Number of connected components -> " << count;
    rr;
}