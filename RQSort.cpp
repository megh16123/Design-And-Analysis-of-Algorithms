#include "daa.h"

ii comparisons = 0;

ii partition(ii arr[], ii l, ii r)
{
    ii pivot = arr[l];
    ii i = l;
    ii j = r;
    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            comparisons++;
            i++;
        }
        while (arr[j] > pivot)
        {
            comparisons++;
            j--;
        }
        if (i < j)
        {
            swab(arr[i], arr[j]);
        }
    }
    swab(arr[l], arr[j]);
    return j;
}
ii random_partition(ii arr[], ii l, ii r)
{
    ii randomized = rand() % r + l;
    swab(arr[randomized], arr[l]);
    return partition(arr, l, r);
}

void quickSort(ii arr[], ii l, ii r)
{
    if (l < r)
    {
        ii piv = random_partition(arr, l, r);
        quickSort(arr, l, piv - 1);
        quickSort(arr, piv + 1, r);
    }
}

ii main()
{
    ii n;
    cc "Enter the size of array -> ";
    ci n;
    ii arr[n];
    rep(i, 0, n)
    {
        ci arr[i];
    }
    quickSort(arr, 0, n);
    disp(arr, n);
    cc "Number of comparisons -> " << comparisons;
}