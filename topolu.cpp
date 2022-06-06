#include "../daa.h"

vi indeg(N, 0);

ii main()
{
    ii m, n;
    ci m >> n;
    rep(i, 0, m)
    {
        ii x, y;
        ci x >> y;
        adj[x].pb(y);
        indeg[y]++;
    }
    qi q;
    rep(i, 0, n)
    {
        if (indeg[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        ii node = q.front();
        q.pop();
        cc node;
        ff(x, adj[node])
        {
            indeg[x]--;
            if (indeg[x] == 0)
                q.push(x);
        }
    }
}