#include "../daa.h"

ii dp[N];

ii fib(ii n)
{
    if (n == 0)
        rr;
    if (n == 1)
        rr;
    if (n == 2)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}

ii main()
{
    ii n;
    ci n;
    vi dp(n + 1);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    rep(i, 3, n + 1)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cc dp[n];

    // rep(i, 0, N)
    // {
    //     dp[i] = -1;
    // }
    // cc fib(n);
    cc endl;
}