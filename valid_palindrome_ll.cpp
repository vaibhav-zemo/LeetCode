#include <iostream>
#include <string>
using namespace std;

bool validPalindrome(string s)
{
    int l = s.size();
    int count1 = 0, count2 = 0;

    int i = 0, j = l - 1;
    while (i < j && j >= 0)
    {
        if (s[i] == s[j])
        {
            i++, j--;
        }
        else
        {
            i++;
            count1++;
        }
    }
    i = 0, j = l - 1;
    while (i < j && j >= 0)
    {
        if (s[i] == s[j])
        {
            i++, j--;
        }
        else
        {
            j--;
            count2++;
        }
    }

    if (count1 == 1 || count2 == 1)
    {
        return true;
    }
    if (count1 == 0 || count2 == 0)
    {
        return true;
    }
    reutrn false;
}

int main()
{

    return 0;
}