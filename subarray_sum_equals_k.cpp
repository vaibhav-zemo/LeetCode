#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    int curSum = 0;
    int ans = 0;
    for (int x : nums)
    {
        curSum += x;

        if (curSum - k == 0)
        {
            ans++;
        }
        if (map.find(curSum - k)!=map.end())
        {
            ans += map[curSum - k];
        }
        
        map[curSum]++;
    }
    return ans;
}

int main()
{

    return 0;
}