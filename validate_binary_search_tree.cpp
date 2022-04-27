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

class Solution
{
public:
    vector<int> ans;
    bool isValidBST(TreeNode *root)
    {
        if (root == NULL)
            return true;
        inorder(root);
        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i] > ans[i + 1])
                return false;
            else if (ans[i] == ans[i + 1])
                return false;
        }
        return true;
    }
    void inorder(TreeNode *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            ans.push_back(root->val);
            inorder(root->right);
        }
    }
};

int main()
{

    return 0;
}