#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    char repeatedCharacter(string s)
    {
        char ans = '/';
        unordered_map<char, int> mp;
        for (char x : s)
        {
            mp[x]++;
            if (mp[x] > 1)
            {
                return x;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}