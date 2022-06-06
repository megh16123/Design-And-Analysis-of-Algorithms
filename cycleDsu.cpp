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
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}

void union_set(ii a, ii b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}

ii main()
{
    rep(i, 0, N)
    {
        make_set(i);
    }
    ii m, n;
    ci n >> m;
    vector<vi> edges;
    rep(i, 0, m)
    {
        ii x, y;
        ci x >> y;
        edges.pb({x, y});
    }
    bool cycle = false;
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
}