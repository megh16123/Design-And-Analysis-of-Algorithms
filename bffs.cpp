#include "daa.h"

// vi adj[N];
// vector<bool> vis(N, false);

ii main()
{
    ii n, m;
    ci n >> m;
    ii x, y;
    rep(i, 0, m)
    {
        ci x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    qi q;
    q.push(1);
    vis[1] = true;
    while (!q.empty())
    {
        ii node = q.front();
        q.pop();
        cc node;
        cc endl;
        ff(x, adj[node])
        {
            if (!vis[x])
            {
                vis[x] = true;
                q.push(x);
            }
        }
    }

    rr;
}