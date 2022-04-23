#include <iostream>
#include <vector>
#include <string>
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
    void helper(TreeNode *root, vector<string> &ans, string &st)
    {
        if (root == NULL)
        {
            st.erase(st.size()-2,2);
            ans.push_back(st);
            st.erase(st.size()-1,1);
            return;
        }

        st += to_string(root->val) + "->";
        helper(root->left, ans, st);
        helper(root->right, ans, st);
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> ans;
        string st = "";
        helper(root, ans, st);
        return ans;
    }
};

int main()
{

    return 0;
}