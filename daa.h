#include <bits/stdc++.h>

using namespace std;

#define ii int
#define rep(i, a, b) for (ii i = a; i < b; i++)
#define cc cout <<
#define rr return 0
#define ci cin >>
#define N 10000
#define qi queue<int>
#define pb push_back
#define ff(x, adj) for (int x : adj)
#define vi vector<int>
#define pi pair<int, int>
vi adj[N];
vector<bool> vis(N, false);

void swab(ii &a, ii &b)
{
    ii temp = a;
    a = b;
    b = temp;
}
void disp(int arr[], int n)
{
    rep(i, 0, n)
    {
        cc arr[i] << " ";
    }
    cc endl;
}