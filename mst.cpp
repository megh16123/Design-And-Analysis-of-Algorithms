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
    ii cost = 0;
    rep(i, 0, N)
    {
        make_set(i);
    }
    ii m, n;
    ci n >> m;
    vector<vi> edges;
    rep(i, 0, m)
    {
        ii x, y, w;
        ci x >> y >> w;
        edges.pb({w, x, y});
    }
    sort(edges.begin(), edges.end());
    for (auto i : edges)
    {
        ii w = i[0];
        ii u = i[1];
        ii v = i[2];
        ii x = find_set(u);
        ii y = find_set(v);
        if (x == y)
        {
            continue;
        }
        else
        {
            cost += w;
            cc u << "  " << v << endl;
            union_set(u, v);
        }
    }

    cc "Min Cost of spanning tree is  -> " << cost;
}