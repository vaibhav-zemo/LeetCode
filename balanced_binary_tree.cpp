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

int maxHeight(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int height = 1;

    int x = maxHeight(root->left);
    int y = maxHeight(root->right);
    return max(x, y) + 1;
}

bool isBalanced(TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }

    int left_l = maxHeight(root->left);
    int right_l = maxHeight(root->right);
    if (abs(right_l - left_l) > 1)
    {
        return false;
    }
    else
    {
        return (isBalanced(root->left) && isBalanced(root->right));
    }
}

int main()
{

    return 0;
}