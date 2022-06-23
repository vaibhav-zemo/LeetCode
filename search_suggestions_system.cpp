#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
    {
        sort(products.begin(), products.end());
        map<string, vector<string>> mp;
        for (string st : products)
        {
            string temp = "";
            for (char ch : st)
            {
                temp += ch;
                if (!mp.count(temp))
                {
                    vector<string> vt = mp[temp];
                    vt.push_back(temp);
                    mp[temp] = vt;
                }
                else
                {
                    mp[temp].push_back(temp);
                }
            }
        }
        vector<vector<string>> ans;
        string st = "";
        for (char ch : searchWord)
        {
            st += ch;
            vector<string> temp = mp[st];
            if (temp.size() <= 3)
            {
                ans.push_back(temp);
            }
            else
            {
                vector<string> vt;
                for (int i = 0; i < 3; i++)
                {
                    vt.push_back(temp[i]);
                }
                ans.push_back(vt);
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}