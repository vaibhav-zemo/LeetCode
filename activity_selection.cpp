#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int activitySelection(vector<int> start, vector<int> end, int n)
{
    // Your code here
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({end[i], start[i]});
    }

    sort(v.begin(), v.end());

    int cnt = 1;
    int last = v[0].first;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second > last)
        {
            cnt++;
            last = v[i].first;
        }
    }
    return cnt;
}

int main()
{

    return 0;
}