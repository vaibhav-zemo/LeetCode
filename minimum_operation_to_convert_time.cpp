#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int convertTime(string current, string correct)
{
    int currH = 0, currM = 0, corH = 0, corM = 0;
    currH += (current[0] - '0') * 10 + (current[1] - '0');
    currM += (current[3] - '0') * 10 + (current[4] - '0');
    corH += (correct[0] - '0') * 10 + (correct[1] - '0');
    corM += (correct[3] - '0') * 10 + (correct[4] - '0');

    int ans = 0;
    if (corH >= currH)
    {
        ans += corH - currH;
        if (corM < currM)
        {
            ans--;
        }
    }
    else
    {
        ans += (24 - currH) + corH;
        if (corM < currM)
        {
            ans--;
        }
    }

    int diff = 0;
    if (corM >= currM)
    {
        diff = corM - currM;
    }
    else
    {
        diff = (60 - currM) + corM;
    }

    if (diff > 0)
    {
        ans += (diff / 15);
        diff -= (diff / 15) * 15;
        if (diff > 0)
        {
            ans += (diff / 5);
            diff -= (diff / 5) * 5;
            if (diff > 0)
            {
                ans += diff;
            }
        }
    }

    return ans;
}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << convertTime(s, t);
    return 0;
}