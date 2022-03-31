#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string temp = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        int j = 0;
        for ( j = 0; j < strs[i].size(); j++)
        {
            if (temp[j] != strs[i][j])
            {
                break;
            }
        }
        temp = temp.substr(0,j);
    }
    return temp;
}

int main()
{
    vector<string> v = {"dog","racecar","car"};
    cout << longestCommonPrefix(v);

    return 0;
}