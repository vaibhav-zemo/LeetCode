#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        map[nums[i]]++;
    }

    vector<int> ans;
    for (auto it : map)
    {
        if (it.second == 2)
        {
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main()
{

    return 0;
}