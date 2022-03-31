#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            cnt++;
            nums.erase(nums.begin() + i);
            i--;
        }
    }

    while (cnt--)
    {
        nums.push_back(0);
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;

        v.push_back(a);
    }

    moveZeroes(v);
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}