#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;

        unordered_map<char, int> map;
        for (char ch : st)
        {
            map[st[ch]]++;
        }

        int cnt = 0, cnt2 = 0;

        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == 'K')
            {
                cnt2 = 0;
                while (i < (st.length() - 1) && st[i] == st[i + 1])
                {
                    cnt++;
                    i++;
                }
                cnt = 0;
            }
            cnt2++;
        }
    }
    return 0;
}