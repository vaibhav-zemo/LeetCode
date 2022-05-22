#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int gcd(int x, int y)
{
    int d;
    if (y > x)
    {
        y = x + y;
        x = y - x;
        y = y - x;
    }
    for (int i = 1; i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            d = i;
        }
    }
    return d;
}

vector<int> ans;
bool sol(int total, int x, int y, int i, int n, vector<pair<vector<int>, int>> &v)
{
    if (i == n)
    {
        int left = total - i;
        if (i == x && left == y)
        {
            ans.push_back(i);
            return true;
        }
        vector<int> temp;
        temp.push_back(i);
        v.push_back({temp, i});
        return false;
    }

    int left = total - i;
    if (i == x && left == y)
    {
        ans.push_back(i);
        return true;
    }
    bool flag = sol(total, x, y, i++, n, v);

    if (flag)
    {
        return flag;
    }
    else
    {
        int a = i;
        for (auto p : v)
        {
            int j = p.second;
            int tt = i + j;
            int left = total - tt;
            if (tt == x && left == y)
            {
                for (auto b : p.first)
                {
                    ans.push_back(b);
                }
                return true;
            }
            vector<int> tempV;
            for (auto b : p.first)
            {
                tempV.push_back(b);
            }
            tempV.push_back(i);
            v.push_back({tempV, p.second + i});
        }
        return false;
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int d = gcd(x, y);

        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cnt += i;
        }
        vector<pair<vector<int>, int>> v;
        bool flag = sol(i, x / d, y / d, 1, n, v);
        cout << flag << endl;
    }
    return 0;
}