#include <iostream>
#include <vector>
#include <unordered_map>
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

class Solution
{
public:
    TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
    {
        TreeNode *root = new TreeNode(preorder[0]);
        int size = preorder.size();

        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        for (int i = 0; i < size; i++)
        {
            map1[postorder[i]] = i;
        }

        for (int i = 0; i < size; i++)
        {
            map2[preorder[i]] = i;
        }

        vector<int> visited(size);

        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *front = q.front();
            q.pop();
            int val = front->val;

            int index = map2[val];
            visited[index]++;

            int index2 = map1[val];

            int leftIdx = index + 1;
            int rightIdx = index2 - 1;

            if (leftIdx >= 0 && leftIdx < size && !visited[leftIdx])
            {
                TreeNode *leftNode = new TreeNode(preorder[leftIdx]);
                q.push(leftNode);
                front->left = leftNode;
            }

            if (rightIdx >= 0 && rightIdx < size && !visited[rightIdx])
            {
                TreeNode *rightNode = new TreeNode(postorder[rightIdx]);
                q.push(rightNode);
                front->right = rightNode;
            }
        }

        return root;
    }
};

int main()
{

    return 0;
}