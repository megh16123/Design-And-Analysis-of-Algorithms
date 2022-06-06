#include "daa.h"

ii partition(ii arr[], ii l, ii r)
{
    ii randomized = rand() % r + l;
    swap(arr[r], arr[randomized]);
    ii i = l - 1;
    ii pivot = arr[r];
    for (ii j = l; j <= r - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

ii random_select(ii arr[], ii l, ii r, ii i)
{
    if (l == r)
        return arr[l];
    ii piv = partition(arr, l, r);
    ii k = piv - l + 1;
    if (i == k)
    {
        return arr[piv];
    }
    if (i < k)
    {
        return random_select(arr, l, piv - 1, i);
    }
    if (i > k)
    {
        return random_select(arr, piv + 1, r, i - k);
    }
}

ii main()
{
    ii n;
    ci n;
    ii arr[n];
    rep(i, 0, n)
    {
        ci arr[i];
    }
    ii k;
    ci k;
    cc random_select(arr, 0, n, k);
    rr;
}