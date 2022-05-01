#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        int i = 0;
        int j = 0;
        for (int k = 0; k < n; k++)
        {
            if (s[k] != '#')
            {
                s[i] = s[k];
                i++;
            }
            else if (i > 0)
                i--;
        }
        for (int k = 0; k < m; k++)
        {
            if (t[k] != '#')
            {
                t[j] = t[k];
                j++;
            }
            else if (j > 0)
                j--;
        }
        if (i != j)
            return false;
        for (int k = 0; k < j; k++)
        {
            if (s[k] != t[k])
                return false;
        }
        return true;
    }
};

int main()
{

    return 0;
}