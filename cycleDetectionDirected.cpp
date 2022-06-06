#include "daa.h"
vi stck(N, 0);
bool isCycle(ii src)
{
    stck[src] = true;
    if (!vis[src])
    {
        vis[src] = true;
        ff(x, adj[src])
        {
            if (!vis[x] and isCycle(x))
            {
                return true;
            }
            if (stck[x])
            {
                return true;
            }
        }
    }
    stck[src] = false;
    return false;
}
ii main()
{
    ii m, n;
    ci n >> m;
    rep(i, 0, n)
    {
        ii x, y;
        ci x >> y;

        adj[x].pb(y);
    }

    bool cycle = false;
    rep(i, 0, n)
    {
        if (!vis[i] and isCycle(i))
        {
            cycle = true;
        }
    }
    if (cycle)
    {
        cc "present";
    }
    else
    {
        cc "not";
    }

    rr;
}