#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int singleNumber(vector<int> &nums)
{
    map<int, int> map;
    for (int x : nums)
    {
        map[x]++;
    }

    int ans = 0;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        if (it->second == 1)
        {
            ans= it->first;
        }
    }
    return ans;
}

int main()
{

    return 0;
}