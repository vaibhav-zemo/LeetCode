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

int maxDepth(TreeNode *root)
{
    int height = 0;
    if (root == NULL)
    {
        return 0;
    }

    int x = maxDepth(root->left);
    int y = maxDepth(root->right);
    height = max(x, y);
    return height + 1;
}

int main()
{

    return 0;
}