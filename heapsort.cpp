#include <bits/stdc++.h>

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)

void disp(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void heapSort(int arr[], int n)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    rep(i, 0, n)
    {
        pq.push(arr[i]);
    }
    int i = 0;
    while (!pq.empty())
    {
        arr[i] = pq.top();
        pq.pop();
        i++;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array -> ";
    cin >> n;
    int arr[n];
    rep(i, 0, n)
    {
        cin >> arr[i];
    }
    heapSort(arr, n);
    disp(arr, n);
}