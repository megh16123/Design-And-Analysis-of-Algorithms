#include "daa.h"

vi col(N, -1);
bool bipart = true;

void color(ii u, ii colorr)
{
    if (col[u] != -1 and col[u] != colorr)
    {
        bipart = false;
        return;
    }
    col[u] = colorr;
    if (vis[u])
        return;
    vis[u] = true;
    ff(x, adj[u])
    {
        color(x, colorr xor 1);
    }
}
ii main()
{
    ii m, n, x, y;
    ci n >> m;
    rep(i, 0, m)
    {
        ci x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    rep(i, 0, n)
    {
        if (!vis[i])
        {
            color(i, 0);
        }
    }

    if (bipart)
        cc "Bipart";
    else
        cc "Not";
}