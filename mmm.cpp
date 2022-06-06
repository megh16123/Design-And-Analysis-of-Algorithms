#include <bits/stdc++.h>
using namespace std;

vector<int> dp(100, 0);

struct Intervals
{
    int ft;
    int st;
    int wt;
};

class WIS
{
public:
    vector<Intervals> In;

    int n;
    void input();
    void sorting();
    int p(int j);
    int mComputeOpt(int j);
};

void WIS::input()
{
    cin >> n;
    In[0].wt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> In[i].st >> In[i].ft >> In[i].wt;
    }
}

void WIS::sorting()
{
    sort(In.begin(), In.end());
}

int WIS::p(int j)
{
    for (int i = j - 1; i > 0; i--)
    {
        if (In[i].ft >= In[j].st)
        {
            return i;
        }
    }
    return 0;
}

int WIS::mComputeOpt(int j)
{
    if (j == 0)
        return 0;
    else if (dp[j])
        return dp[j];

    else
    {
        dp[j] = max((In[j].wt + mComputeOpt(p(j))), mComputeOpt(j - 1));
    }
    return dp[j];
}

int main()
{
    WIS job;
    job.input();
    job.sorting();
    job.p(1);
    job.mComputeOpt(1);

    for (int i = 1; i <= job.n; i++)
    {
        cout << job.mComputeOpt(i) << "\t";
    }

    return 0;
}