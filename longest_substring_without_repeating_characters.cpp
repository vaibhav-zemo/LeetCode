#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<int, int> mp;
        int ans = 0, cnt = 0;
        int i = 0, j = 0;
        while (i <= j && j < s.size())
        {
            while (mp.count(s[j]) && mp[s[j]] > 0)
            {
                mp[s[i]]--;
                i++;
                cnt--;
            }
            mp[s[j]]++;
            cnt++;
            ans = max(ans, cnt);
        }

        return ans;
    }
};

int main()
{

    return 0;
}