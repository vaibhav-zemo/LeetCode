#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    unordered_map<int, int> map;
    int ans = 1;
    for (int x : nums)
    {
        map[x]++;
    }

    for (int i = 1; i < INT_MAX; i++)
    {
        if (!map.count(i))
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{

    return 0;
}