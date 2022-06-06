#include "../daa.h"

void heapify(vi &a, ii n, ii i)
{
    ii maxInd = i;
    ii l = 2 * i + 1;
    ii r = 2 * i + 2;

    if (l < n and a[l] > a[maxInd])
    {
        maxInd = l;
    }
    if (r < n and a[r] > a[maxInd])
    {
        maxInd = r;
    }
    if (maxInd != i)
    {
        swap(a[i], a[maxInd]);
        heapify(a, n, maxInd);
    }
}

void heapSort(vi &a)
{
    ii n = a.size();
    for (ii i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (ii i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
ii main()
{
    ii n;
    ci n;
    vi a(n);
    rep(i, 0, n)
    {
        ci a[i];
    }
    heapSort(a);
    rep(i, 0, n)
        cc a[i];
}