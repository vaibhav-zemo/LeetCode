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

int minDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int x = minDepth(root->left);
    int y = minDepth(root->right);
    if (x == 0)
    {
        return y + 1;
    }
    else if (y == 0)
    {
        return x + 1;
    }
    else
    {
        return min(x, y) + 1;
    }
}

int main()
{

    return 0;
}