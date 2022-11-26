//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        // code here
        stack<int> st;
        map<int,Node*> mp;
        for(int i=0;i<str.size();i++){
            if(str[i]==')'){
                int child = st.top();
                st.pop();
                Node *c;
                if(mp.find(child)==mp.end()){
                    c = new Node(child);
                }
                else{
                    c = mp[child];
                }
                
                int parent = st.top();
                Node *p;
                if(mp.find(parent)==mp.end()){
                    p = new Node(parent);
                    p->left = c;
                    mp[parent] = p;
                }
                else{
                    p = mp[parent];
                    p->right = c;
                }
            }
            else{
                if(str[i]=='(') continue;
                int num = 0;
                while(isdigit(str[i])){
                    num = num*10 + (str[i]-'0');
                    i++;
                }
                i--;
                st.push(num);
            }
        }
        if(mp.size()==0) return new Node(st.top());
        return mp[st.top()];
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends