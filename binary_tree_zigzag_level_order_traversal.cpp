#include <iostream>
#include <queue>
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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
        {
            return ans;
        }

        queue<TreeNode *> q;
        q.push(root);
        bool flag = true;
        while (!q.empty())
        {
            int size = q.size();
            vector<int> v;

            if (flag)
            {
                for (int i = 0; i < size; i++)
                {
                    TreeNode *front = q.front();
                    q.pop();
                    v.push_back(front->val);
                    if (front->right)
                    {
                        q.push(front->right);
                    }
                    if (front->left)
                    {
                        q.push(front->left);
                    }
                }
                flag = false;
            }
            else
            {
                for (int i = 0; i < size; i++)
                {
                    TreeNode *back = q.front();
                    q.pop();
                    v.push_back(back->val);
                    if (back->left)
                    {
                        q.push(back->left);
                    }
                    if (back->right)
                    {
                        q.push(back->right);
                    }
                }
                flag = true;
            }
            ans.push_back(v);
        }
        return ans;
    }
};

int main()
{

    return 0;
}