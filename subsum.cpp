#include "../daa.h"

ii sret[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int dp[N][N];

bool SubsetSum(ii n, ii m)
{
    if (m == 0)
        return true;
    if (n == 0)
        return 0;
    if (sret[n - 1] > m)
    {
        dp[n - 1][m] = SubsetSum(n - 1, m);
        return dp[n - 1][m];
    }
    if (dp[n - 1][m] != -1)
        return dp[n - 1][m];
    else
    {

        dp[n - 1][m] = SubsetSum(n - 1, m) || SubsetSum(n - 1, m - sret[n - 1]);
        return dp[n - 1][m];
    }
}

ii main()
{
    rep(i, 0, N)
    {
        rep(j, 0, N)
        {
            dp[i][j] = -1;
        }
    }
    ii m;
    ci m;
    cc((SubsetSum(sizeof(sret) / sizeof(sret[0]), m)) ? "Yes" : "No");
    rr;
}