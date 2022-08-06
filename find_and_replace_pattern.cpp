#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<string> findAndReplacePattern(vector<string> &words, string pattern)
    {
        vector<string> ans;
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            if (words[i].size() == pattern.size())
            {
                unordered_map<char, char> mp, mp2;
                for (int j = 0; j < words[i].size(); j++)
                {
                    if (mp.count(words[i][j]) || mp2[pattern[j]])
                    {
                        if ((mp[words[i][j]] != pattern[j]) && (mp2[pattern[j]] != words[i][j]))
                        {
                            flag = true;
                            break;
                        }
                    }
                    else
                    {
                        mp[words[i][j]] = pattern[j];
                        mp2[pattern[j]] = words[i][j];
                    }
                }

                if (!flag)
                {
                    ans.push_back(words[i]);
                }
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}