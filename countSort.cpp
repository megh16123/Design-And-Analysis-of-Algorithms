#include "daa.h"

void countSort(ii arr[], ii n)
{
    ii k = 0;
    rep(i, 0, n)
    {
        k = max(k, arr[i]);
    }
    ii count[k] = {0};
    rep(i, 0, n)
    {
        count[arr[i]]++;
    }
    rep(i, 1, k + 1)
    {
        count[i] += count[i - 1];
    }
    ii output[n];
    for (ii l = n - 1; l > 0; l--)
    {
        output[count[arr[l]] - 1] = arr[l];
        count[arr[l]]--;
    }
    rep(i, 0, n)
    {
        arr[i] = output[i];
    }
    rep(i, 0, n)
    {
        cc arr[i] << " ";
    }
}

ii main()
{
    ii arr[] = {1, 3, 4, 5, 6, 7};
    countSort(arr, 6);
}