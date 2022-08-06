#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "", temp = " ";
        int n = s.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                ans = temp + ans;
                temp = " ";
            }
        }
        return ans.substr(1);
    }
};

int main()
{
    return 0;
}