#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *helper(vector<int> nums, int st, int end)
{
    if (st >= end)
    {
        return NULL;
    }

    int mid = (st + end) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = helper(nums, st, mid - 1);
    root->right = helper(nums, mid + 1, end);

    return root;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return helper(nums,0,nums.size()-1);
}

int main()
{

    return 0;
}