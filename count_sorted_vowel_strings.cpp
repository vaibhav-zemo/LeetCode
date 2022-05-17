#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    int ans = 0;
    void helper(int n, int i)
    {

        if (n == 0)
        {
            ans++;
            return;
        }

        for (int j = 0; j < vowel.size(); j++)
        {
            if (i < vowel.size() && vowel[j] < vowel[i])
            {
                continue;
            }
            helper(n - 1, j);
        }
    }

public:
    int countVowelStrings(int n)
    {
        helper(n, 0);
        return ans;
    }
};

int main()
{

    return 0;
}