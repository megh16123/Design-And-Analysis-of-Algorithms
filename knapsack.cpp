#include "daa.h"

int wt[N], val[N], dp[N][N];

int knapsack(ii n, ii w)
{
    if (n <= 0 or w <= 0)
    {
        rr;
    }
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (wt[n - 1] > w)
    {
        dp[n][w] = knapsack(n - 1, w);
    }
    else
        dp[n][w] = max(knapsack(n - 1, w), knapsack(n - 1, w - wt[n - 1]) + val[n - 1]);
    return dp[n][w];
}

int main()
{
    ii n, w;
    ci n;
    rep(i, 0, N)
    {
        rep(j, 0, N)
        {
            dp[i][j] = -1;
        }
    }
    rep(i, 0, n)
    {
        ci val[i];
    }
    rep(i, 0, n)
        ci wt[i];

    ci w;
    cc knapsack(n, w);
}