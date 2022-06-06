#include "../daa.h"

vi parent(N);
vi sz(N);

void make_set(ii v)
{
    parent[v] = v;
    sz[v] = 1;
}
ii find_set(ii v)
{
    if (parent[v] == v)
    {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}
void union_set(ii u, ii v)
{
    ii x = find_set(u);
    ii y = find_set(v);
    if (x != y)
    {
        if (sz[x] < sz[y])
        {
            swap(x, y);
        }
        parent[y] = x;
        sz[x] += sz[y];
    }
}
ii main()
{
    rep(i, 0, N)
        make_set(i);

    ii m, n;
    bool cycle = false;
    ci n >> m;
    vector<vi> edges;
    rep(i, 0, m)
    {
        ii x, y;
        ci x >> y;
        edges.pb({x, y});
    }
    for (auto x : edges)
    {
        ii u = x[0];
        ii v = x[1];
        ii su = find_set(u);
        ii sv = find_set(v);

        if (su == sv)
        {
            cycle = true;
        }
        else
        {
            union_set(u, v);
        }
    }
    cc((cycle) ? "Yes" : "No");
    rr;
}