#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s, int k)
    {
        vector<pair<char, int>> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (v.empty() || s[i] != v.back().first)
            {
                v.push_back({s[i], 1});
            }
            else if (++v.back().second == k)
            {
                v.pop_back();
            }
        }

        string ans = "";
        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i].first;
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}