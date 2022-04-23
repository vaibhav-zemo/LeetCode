#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums2.size(); i++)
    {
        map[nums2[i]] = i;
    }
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        int st = map[nums1[i]] + 1;
        bool flag = true;
        while (st < nums2.size())
        {
            if (nums1[i] < nums2[st])
            {
                flag = false;
                ans.push_back(nums2[st]);
                break;
            }
            st++;
        }
        if (flag)
        {
            ans.push_back(-1);
        }
    }

    return ans;
}

int main()
{

    return 0;
}