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

void helper(TreeNode*root,vector<int> &ans){
    if (root==NULL)
    {
        return;
    }
    
    ans.push_back(root->val);
    helper(root->left,ans);
    helper(root->right,ans);

    return;
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> ans;
    helper(root,ans);
    return ans;
}

int main()
{

    return 0;
}