#include <bits/stdc++.h>

using namespace std;

int interval(int s[], int f[], int n)
{
    vector<pair<int, int>> inters;
    for (int i = 0; i < n; i++)
    {
        inters.push_back({f[i], s[i]});
    }
    sort(inters.begin(), inters.end());

    int sch = 0, count = 1;
    for (int i = 0; i < n; i++)
    {
        if (inters[i].second >= inters[sch].first)
        {
            sch = i;
            count++;
        }
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int s[n], f[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> f[i];
    }
    cout << interval(s, f, n);

    return 0;
}
