#include "daa.h"

void insertion(ii arr[], ii n)
{
    rep(i, 1, n)
    {
        ii current = arr[i];
        ii j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

ii main()
{
    ii n;
    cc "Enter the size of array :-> ";
    ci n;
    ii arr[n];
    rep(i, 0, n)
    {
        ci arr[i];
    }
    insertion(arr, n);
    disp(arr, n);

    rr;
}