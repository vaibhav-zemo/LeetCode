#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
    unordered_map<char, int> mp, temp;
    bool check()
    {
        for (auto it : mp)
        {
            if (temp[it.first] != it.second)
            {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        if (s1.size() > s2.size())
        {
            return false;
        }
        for (char x : s1)
        {
            mp[x]++;
        }

        int n1 = s1.size(), n2 = s2.size();
        for (int i = 0; i < n1 - 1; i++)
        {
            temp[s2[i]]++;
        }

        for (int i = n1 - 1; i < n2; i++)
        {
            temp[s2[i]]++;
            if (check())
            {
                return true;
            }
            temp[s2[i - n1 + 1]]--;
        }
        return false;
    }
};

int main()
{

    return 0;
}