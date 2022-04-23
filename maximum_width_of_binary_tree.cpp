#include <iostream>
#include <queue>
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
    int widthOfBinaryTree(TreeNode* root) {
        int size;
        int minIndex,maxIndex,maxi = 1;
        queue<pair<TreeNode*,int>> qu;
        qu.push(make_pair(root,0));
        pair<TreeNode*,int> temp;
        while(!qu.empty())
        {
            size = qu.size();
            minIndex = qu.front().second;
            maxIndex = qu.back().second;
            while(size--)
            {
                temp = qu.front();
                qu.pop();
                if(temp.first->left) qu.push(make_pair(temp.first->left,2*(temp.second-maxIndex)));
                if(temp.first->right) qu.push(make_pair(temp.first->right,2*(temp.second-maxIndex)+1));
            }
            maxi = max(maxi,maxIndex-minIndex+1);
        }
        return maxi;
        
    }
};

int main()
{

    return 0;
}