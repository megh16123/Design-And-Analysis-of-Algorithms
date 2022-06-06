#include "daa.h"

ii main()
{
    ii m, n;
    ci n >> m;

    vi indeg(n, 0);
    rep(i, 0, m)
    {
        ii u, v;
        ci u >> v;
        adj[u].pb(v);
        indeg[v]++;
    }
    qi pq;
    rep(i, 0, n)
    {
        if (indeg[i] == 0)
        {
            pq.push(i);
        }
    }
    while (!pq.empty())
    {

        ii node = pq.front();
        pq.pop();
        cc node << " ";
        ff(x, adj[node])
        {
            indeg[x]--;
            if (indeg[x] == 0)
            {
                pq.push(x);
            }
        }
    }

    rr;
}