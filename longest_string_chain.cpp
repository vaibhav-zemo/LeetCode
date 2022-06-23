#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solution
{
    const bool cmp(string a, string b)
    {
        return a.size() < b.size();
    }

public:
    int longestStrChain(vector<string> &words)
    {
        sort(words.begin(), words.end());
        map<int, int> mp;
        int ans = 0, cnt = 0;
        for (int i = 0; i < words.size(); i++)
        {
            for (char c : words[i])
            {
                mp[c] = ;
            }

            for (int j = i + 1; j < words.size(); i++)
            {
                if (words[i] == words[j])
                {
                    continue;
                }


            }
        }
    }
};

int main()
{

    return 0;
}