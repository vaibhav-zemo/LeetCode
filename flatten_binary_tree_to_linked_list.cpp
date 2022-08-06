#include <iostream>
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

class Solution
{
    
    void helper(TreeNode *root,vector<int> &v)
    {
        if (root == NULL)
        {
            return;
        }

        v.push_back(root->val);
        helper(root->left,v);
        helper(root->right,v);
    }

public:
    void flatten(TreeNode *root)
    {
        if(root==NULL){
            return ;
        }
        vector<int> v;
        helper(root,v);
        TreeNode *temp = root;
        for (int i=1;i<v.size();i++)
        {
            int x = v[i];
            TreeNode *newNode = new TreeNode(x);
            temp->right = newNode;
            temp->left = NULL;
            temp = temp->right;
        }
        temp->right = NULL;
        temp->left = NULL;
        return;
    }
};

int main()
{

    return 0;
}