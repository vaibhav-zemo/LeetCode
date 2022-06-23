#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is(string st, int i, int j)
{
    while (i < j)
    {
        if (st[i] != st[j])
        {
            return false;
        }
    }

    return true;
}

class Solution
{
    int helper(string s, int i, int j, vector<vector<int>> v)
    {
        if (s.size() == 0)
        {
            return 0;
        }

        if (v[i][j]!=-1)
        {
            return v[i][j];
        }
        
        int n = s.size();
        int len = 0;
        for (int i = 0; i < s; i++)
        {

        }
        
        
    }

public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        vector<vector<int>> v(n, vector<int>(n,-1));
    }
};

int main()
{

    return 0;
}