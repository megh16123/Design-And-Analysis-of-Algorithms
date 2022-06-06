#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<pair<float, float>> timeline;
    int jobs;
    cout << "\nEnter the No. of Jobs to be done: ";
    cin >> jobs;

    vector<pair<int, int>> timeline;

    for (int i = 0; i < jobs; i++)
    {
        float profit, due;
        cout << "\nEnter the due time for event" << i << ": ";
        cin >> due;
        cout << "\nEnter the profit associated with the event: ";
        cin >> profit;

        timeline.push_back({due, profit});
    }
    sort(timeline.begin(), timeline.end());
    int startTime = 0, finishTime = startTime + 1;
    float profit = 0;

    for (int i = 0; i < jobs; i++)
    {
        if (finishTime <= timeline[i].first)
        {
            startTime = finishTime;
            finishTime = startTime + 1;
            profit += timeline[i].second;
        }
    }
    return 0;
}
