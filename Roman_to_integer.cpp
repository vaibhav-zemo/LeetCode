#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int romanToInt(string s)
{
    map<char, int> map;
    map['I'] = 1, map['V'] = 5, map['X'] = 10, map['L'] = 50, map['C'] = 100, map['D'] = 500, map['M'] = 1000;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (map[s[i]] < map[s[i + 1]] && i < s.size() - 1)
        {
            ans += map[s[i+1]] - map[s[i]];
            i++;
        }
        else
        {
            ans += map[s[i]];
        }
    }
    return ans;
}

int main()
{
    string st;
    cin>>st;

    cout<<romanToInt(st);

    return 0;
}