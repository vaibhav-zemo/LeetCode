#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string addBinary(string a, string b)
{
    int l1 = a.size();
    int l2 = b.size();
    if (l1 < l2)
    {
        string temp = a;
        a = b;
        b = temp;
        l1 = a.size();
        l2 = b.size();
    }

    string ans = "";
    int i = l1 - 1, j = l2 - 1;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {

        char ch1 = a[i], ch2 = b[j];
        if (ch1 == '0' && ch2 == '1' || ch1 == '1' && ch2 == '0')
        {
            if (carry == 0)
            {
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
        else if (ch1 == '0' || ch2 == '0')
        {
            if (carry == 0)
            {
                ans += '0';
            }
            else
            {
                ans += '1';
                carry = 0;
            }
        }
        else
        {
            if (carry == 0)
            {
                ans += '0';
                carry = 1;
            }
            else
            {
                ans += '1';
            }
        }

        j--, i--;
    }

    while (i >= 0)
    {
        if (carry == 0)
        {
            ans += a[i];
        }
        else
        {
            if (a[i] == '1')
            {
                ans += '0';
            }
            else
            {
                ans += '1';
                carry = 0;
            }
        }

        i--;
    }

    while (j >= 0)
    {
        if (carry == 0)
        {
            ans += b[i];
        }
        else
        {
            if (b[i] == '1')
            {
                ans += '0';
            }
            else
            {
                ans += '1';
                carry = 0;
            }
        }
        j--;
    }
    if (carry == 1)
    {
        ans += '1';
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    cout << addBinary("1", "111");
    return 0;
}