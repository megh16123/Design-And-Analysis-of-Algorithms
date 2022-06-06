#include "../daa.h"

void merge(ii l, ii m, ii r, ii arr[])
{
    ii n1 = m - l + 1;
    ii n2 = r - m;
    ii a[n1], b[n2];
    rep(i, 0, n1)
        a[i] = arr[l + i];
    rep(i, 0, n2)
        b[i] = arr[m + i + 1];
    ii i = 0, j = 0, k = l;
    while (i < n1 and j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
}

void mergeSort(ii l, ii r, ii arr[])
{
    if (l < r)
    {
        ii m = (l + r) / 2;
        mergeSort(l, m, arr);
        mergeSort(m + 1, r, arr);
        merge(l, m, r, arr);
    }
}

ii main()
{
    ii n;
    ci n;
    ii arr[n];
    rep(i, 0, n)
        ci arr[i];
    mergeSort(0, n, arr);
    rep(i, 0, n)
            cc arr[i]
        << " ";
    rr;
}