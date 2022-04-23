#include<iostream>
#include<vector>
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

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1==NULL && root2==NULL)
        {
            return;
        }
        
        if (root1!=NULL && root2!=NULL)
        {
            root1->val += root2->val;
        }
        else if (root1==NULL && root2!=NULL)
        {
            
        }
        
        
    }
};

int main(){

return 0;}