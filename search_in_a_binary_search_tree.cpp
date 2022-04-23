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

TreeNode *searchBST(TreeNode *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->val == val)
    {
        return root;
    }

    TreeNode *ans = root;
    if (root->val > val)
    {
        ans = searchBST(root->left, val);
    }
    else if (root->val < val)
    {
        ans = searchBST(root->right, val);
    }
    return ans;
}

int main()
{

    return 0;
}