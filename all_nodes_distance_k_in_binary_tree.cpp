#include <iostream>
#include <vector>
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

class Solution
{
public:
    TreeNode *helper(TreeNode *root, TreeNode *target)
    {
        if (root == NULL)
        {
            return NULL;
        }

        TreeNode *left = helper(root->left, target);
        TreeNode *right = helper(root->right, target);

        if (left == target || right == target)
        {
            return target;
        }
        return root;
    }

    void left_h(TreeNode *root, int k, vector<int> &ans, int i)
    {
        if (root == NULL)
        {
            return;
        }
        if (i == k)
        {
            ans.push_back(root->val);
            return;
        }

        left_h(root->left, k, ans, i + 1);
        left_h(root->right, k, ans, i + 2);
    }

    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        TreeNode *node = helper(root,target);
        vector<int> ans;
        left_h(root,k,ans,0);
    }
};

int main()
{

    return 0;
}