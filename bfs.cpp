#include "../daa.h"

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
    qi q;
    q.push(1);
    vis[1] = true;
    while (!q.empty())
    {
        ii node = q.front();
        q.pop();
        cc node;
        ff(x, adj[node])
        {
            if (!vis[x])
            {
                vis[node] = true;
                q.push(x);
            }
        }
    }

    rr;
}