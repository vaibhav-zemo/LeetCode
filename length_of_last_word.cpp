#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int lengthOfLastWord(string s)
{
    int l = s.size(), cnt = 0;
    for (int i = l - 1; i >= 0; i--)
    {
        int j = 0;
        while ((i - j) >= 0 && s[i - j] != ' ')
        {
            j++;
            cnt++;
            if (s[i - j] == ' ' || (i - j) < 0)
            {
                return cnt;
            }
        }
    }
    return cnt;
}

int main()
{
    cout << lengthOfLastWord("a");
    return 0;
}