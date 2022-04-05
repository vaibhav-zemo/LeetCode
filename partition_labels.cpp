#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> partitionLabels(string s)
{
    vector<int> ans;
    int l = s.length();
    int st = 0, end = 0;
    for (int i = 0; i < l; i++)
    {

        for (int j = l - 1; j >= i; j--)
        {
            if (j < end)
            {
                break;
            }

            if (s[i] == s[j])
            {
                end = j;
                break;
            }
        }

        if (i == end)
        {
            ans.push_back(end - st + 1);
            if (i != (l - 1))
            {
                st = i + 1;
                end = st;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}