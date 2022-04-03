#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        char temp = s[i];
        s[i] = s[s.size() - i];
        s[s.size() - i] = temp;
    }
}

int main()
{
    
    return 0;
}