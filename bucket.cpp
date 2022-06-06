#include "daa.h"
void insertion(vector<float> arr)
{
    int n = arr.size();
    rep(i, 1, n)
    {
        float current = arr[i];
        ii j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}
void bucket(float arr[], ii n)
{

    vector<float> bucky[10];
    for (ii i = 0; i < n; i++)
    {
        ii interim = arr[i] * 10;
        bucky[interim].push_back(arr[i]);
        insertion(bucky[interim]);
    }
    ii cnt = 0;
    rep(i, 0, 10)
    {
        if (!bucky[i].empty())
        {
            for (float x : bucky[i])
            {
                arr[cnt] = x;
                cnt++;
            }
        }
    }
}

ii main()
{
    float arr[] = {0.02, 0.04, 0.69, 0.98, 0.75};
    bucket(arr, 5);
    rep(i, 0, 5)
    {
        cc arr[i] << " ";
    }

    rr;
}