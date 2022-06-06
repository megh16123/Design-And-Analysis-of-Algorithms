#include "daa.h"

ii main()
{
    vi adj[10000];
    ii m, n;
    cc "Enter the edges\n";
    cc "Enter the number of edges";
    ci m;
    cc "Enter the number of nodes";
    ci n;
    rep(i, 0, m)
    {
        ii u, v;
        ci u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    cc "Adjacency list is given by \n";
    rep(i, 1, n + 1)
    {
        cc i << " -> ";
        ff(x, adj[i])
        {
            cc x << " ";
        }
        cc endl;
    }
    rr;
}