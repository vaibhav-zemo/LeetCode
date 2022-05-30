#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int j = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }

    for (int i = j; i < n; i++)
    {
        nums[i] = 0;
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