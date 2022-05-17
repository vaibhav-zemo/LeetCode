#include <iostream>
#include <vector>
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
    TreeNode *helper(TreeNode *root, TreeNode *target)
    {

        if (root == NULL)
        {
            return NULL;
        }

        if (target->val == root->val)
        {
            return root;
        }

        TreeNode *left_child = helper(root->left, target);
        TreeNode *right_child = helper(root->right, target);

        return left_child == NULL ? right_child : left_child;
    }

public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        TreeNode *ans = helper(cloned, target);
        return ans;
    }
};

int main()
{

    return 0;
}