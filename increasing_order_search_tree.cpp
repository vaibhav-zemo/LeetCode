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

TreeNode *current = new TreeNode(-1);

void helper(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    helper(root->left);
    root->left = nullptr;
    current->right = root;
    current = root;
    helper(root->right);
}

TreeNode *increasingBST(TreeNode *root)
{
    helper(root);
    return current->right;
}

int main()
{

    return 0;
}