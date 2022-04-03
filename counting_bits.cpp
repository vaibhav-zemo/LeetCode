#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> countBits(int n)
{
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        int a = i;
        while (a > 0)
        {
            if (a & 1)
            {
                cnt++;
            }

            a >>= 1;
        }
        ans.push_back(cnt);
    }
    return ans;
}

int main()
{
    vector<int> v = countBits(2);
    return 0;
}