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
    stack<int> st;
    rep(i, 0, n)
    {
        if (indeg[i] == 0)
        {
            st.push(i);
        }
    }
    while (!st.empty())
    {

        ii x = st.top();
        st.pop();
        cc x << " ";
        ff(x, adj[x])
        {
            indeg[x]--;
            if (indeg[x] == 0)
            {
                st.push(x);
            }
        }
    }

    rr;
}