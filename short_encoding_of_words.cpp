#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minimumLengthEncoding(vector<string> &words)
    {
        unordered_map<string, int> mp;
        int ans = words[0].size();
        string st = words[0];
        while (st.size() > 0)
        {
            mp[st]++;
            st = st.substr(1);
        }

        for (int i = 1; i < words.size(); i++)
        {
            string temp = "";
            int cnt = 0;
            for (char ch : words[i])
            {
                temp += ch;
                if (mp.count(temp))
                {
                    cnt = max(cnt,(int)temp.size());
                }
            }
            ans += (words[i].size() - cnt);
            if (cnt == 0)
            {
                ans++;
            }

            temp = words[i];
            while (temp.size()>0)
            {
                mp[temp]++;
                temp = temp.substr(1);   
            }
        }

        return ans+1;
    }
};

int main()
{

    return 0;
}