#include <iostream>
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

class Solution
{
public:
    pair<int, int> helper(TreeNode *root)
    {
        if (root == NULL)
        {
            pair<int, int> p;
            p.first = 0;
            p.second = 0;

            return p;
        }

        pair<int, int> left = helper(root->left);
        pair<int, int> right = helper(root->right);

        int lh = left.first;
        int ld = left.second;
        int rh = right.first;
        int rd = right.second;

        int height = max(lh, rh) + 1;
        int diameter = max((lh + rh), max(ld, rd));
        pair<int, int> p;
        p.first = height;
        p.second = diameter;
        return p;
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        pair<int,int> p = helper(root);
        return p.second;
    }
};

int main()
{

    return 0;
}