#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isPalindrome(string s)
{

    string newstring;
    newstring.resize(s.size());
    int length = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            newstring[length] = tolower(s[i]);
            length++;
        }
        if (s[i] >= 97 && s[i] <= 122 || (s[i]-'0'>=0 && s[i]-'0'<=9))
        {
            newstring[length] = s[i];
            length++;
        }
    }
    
    for (int i = 0; i < length; i++)
    {
        if (newstring[i] != newstring[length - i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}