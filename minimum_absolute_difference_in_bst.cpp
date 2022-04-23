#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
    vector<int> ans;

public:
    void helper(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        helper(root->left);
        ans.push_back(root->val);

        helper(root->right);
    }
    int getMinimumDifference(TreeNode *root)
    {
        helper(root);
        int mn = INT_MAX;
        for (int i = 1; i < ans.size(); i++)
        {
            mn = min(mn, abs(ans[i] - ans[i - 1]));
        }
        return mn;
    }
};

int main()
{

    return 0;
}