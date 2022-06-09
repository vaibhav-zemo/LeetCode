#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    bool is(string st)
    {
        int i = 0, j = st.size() - 1;
        while (i < j)
        {
            if (st[i] != st[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

public:
    int removePalindromeSub(string s)
    {
        if (is(s))
        {
            return 1;
        }
        return 2;
    }
};

int main()
{

    return 0;
}