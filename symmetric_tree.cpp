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

bool helper(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }

    if (p == NULL || q == NULL || p->val != q->val)
    {
        return false;
    }

    bool flag;
    if (helper(p->left, q->right))
    {
        flag = helper(p->right, q->left);
    }
    return flag;
}

bool isSymmetric(TreeNode *root)
{
    TreeNode *left_tree = root->left;
    TreeNode *right_tree = root->right;
    return helper(left_tree, right_tree);
}

int main()
{

    return 0;
}