// LeetCode Problem Number-1373
// Maximum Sum BST in Binary Tree
// Given a binary tree root, return the maximum sum of all keys of any sub-tree which is also a Binary Search Tree (BST).
// Assume a BST is defined as follows:
// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.

class Solution
{
    struct S
    {
        bool isBST;
        int minVal, maxVal, sum;
    };

    S helper(TreeNode *node, int &res)
    {
        if (!node)
        {
            return {true, INT_MAX, INT_MIN, 0};
        }
        S l = helper(node->left, res);
        S r = helper(node->right, res);
        if (l.isBST && r.isBST && l.maxVal < node->val && r.minVal > node->val)
        {
            int sum = l.sum + r.sum + node->val;
            res = max(res, sum);
            return {true, min(l.minVal, node->val), max(r.maxVal, node->val), sum};
        }
        else
        {
            return {false, 0, 0, 0};
        }
    }

public:
    int maxSumBST(TreeNode *root)
    {
        int res = 0;
        helper(root, res);
        return res;
    }
};