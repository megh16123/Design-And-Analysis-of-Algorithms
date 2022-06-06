#include "../daa.h"

bool bipart = true;

vi col(N, -1);

void color(ii u, ii curr)
{
    if (col[u] != -1 and col[u] != curr)
    {
        bipart = false;
        return;
    }
    col[u] = curr;
    if (vis[u])
    {
        return;
    }
    vis[u] = true;
    ff(x, adj[u])
    {
        color(x, curr xor 1);
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
    rep(i, 0, n)
    {
        if (!vis[i])
        {
            color(i, 0);
        }
    }
    cc((bipart) ? "Yes" : "No");
    rr;
}