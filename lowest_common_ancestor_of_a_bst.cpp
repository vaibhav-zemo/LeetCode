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
public:
    TreeNode *helper(TreeNode *root, int p, int q)
    {
        if (!root)
        {
            return NULL;
        }

        if (root->val >= p && root->val <= q)
        {
            return root;
        }
        else if (root->val < p)
        {
            return helper(root->right, p, q);
        }
        else
        {
            return helper(root->left, p, q);
        }
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (p->val > q->val)
        {
            return helper(root, q->val, p->val);
        }
        else
        {
            return helper(root, p->val, q->val);
        }
    }
};

int main()
{

    return 0;
}