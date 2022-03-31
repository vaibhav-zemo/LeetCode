#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int limit = nums.size() / 2;
    int ans = 0;
    map<int, int> map;
    for (int x : nums)
        map[x]++;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        if (it->second > limit)
        {
            ans = it->first;
            break;
        }
    }
    return ans;
}

int main()
{

    return 0;
}