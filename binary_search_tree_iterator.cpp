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

class BSTIterator
{
private:
    vector<int> ans;
    TreeNode *root;
    int i = 0;
public:
    void inorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }

    BSTIterator(TreeNode *root)
    {
        this->root = root;
        inorder(root);
    }

    int next()
    {
        int prev = i;
        i++;
        return ans[prev];
        
    }

    bool hasNext()
    {
        return i<ans.size();
    }
};

int main()
{

    return 0;
}