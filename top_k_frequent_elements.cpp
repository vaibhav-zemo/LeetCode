#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    for (int x : nums)
    {
        map[x]++;
    }

    vector<pair<int, int>> v;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        v.push_back(make_pair(it->second, it->first));
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<int> ans;

    int cnt = 0;
    while (cnt < k)
    {
        ans.push_back(v[cnt].second);
        cnt++;
    }

    return ans;
}

int main()
{

    return 0;
}