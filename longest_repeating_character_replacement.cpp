#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int characterReplacement(string s, int k)
{
    unordered_map<char, int> map;
    int maxlength = 0, st = 0, maxcount = 0;

    for (int end = 0; end < s.length(); end++)
    {
        map[s[end]]++;
        int cnt = map[s[end]];
        maxcount = max(maxcount, cnt);

        while ((end - st - maxcount + 1) > k)
        {
            map[s[st]]--;
            st++;
        }

        maxlength = max(maxlength, end - st + 1);
    }
    return maxlength;
}

int main()
{
    string st;
    cin >> st;

    cout << characterReplacement(st, 2);
    return 0;
}