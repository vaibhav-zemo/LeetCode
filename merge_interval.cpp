#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    int str = intervals[0][0], end = intervals[0][1];
    for (int i = 1; i < intervals.size(); i++)
    {
        if (end >= intervals[i][0])
        {
            if (end < intervals[i][1])
            {
                end = intervals[i][1];
            }
        }
        else
        {
            ans.push_back({str, end});
            str = intervals[i][0];
            end = intervals[i][1];
        }
    }
    ans.push_back({str, end});
    return ans;
}

int main()
{
    vector<vector<int>> v = {{1, 4}, {0, 4}};
    vector<vector<int>> ans = merge(v);
    for (auto x : ans)
    {
        cout << x[0] << " " << x[1] << endl;
    }

    return 0;
}