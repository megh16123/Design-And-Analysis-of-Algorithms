#include "../daa.h"

ii partition(ii arr[], ii l, ii r)
{
    ii pivot = arr[r];
    ii i = l - 1;
    rep(j, l, r)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[r]);

    return i + 1;
}

void quickSort(ii arr[], ii l, ii r)
{

    if (l < r)
    {
        ii pivot = partition(arr, l, r);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, r);
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
    quickSort(arr, 0, n);
    rep(i, 0, n)
    {
        cc arr[i];
    }
}