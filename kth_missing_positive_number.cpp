#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        unordered_map<int, int> mp;
        for (int x : arr)
        {
            mp[x]++;
        }

        int cnt = 0;
        for (int i = 1; i < 2001; i++)
        {
            if (!mp.count(i))
            {
                cnt++;
            }
            if (cnt == k)
            {
                return i;
            }
        }
        return 0;
    }
};

int main()
{

    return 0;
}