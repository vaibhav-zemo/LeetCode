//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* inputList(int size)
{
    if (size == 0) return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}


// } Driver Code Ends
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
    int len(Node *head){
        int cnt = 0;
        Node *temp = head;
        while(temp){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        if(!head1 || !head2) return -1;
        int l1 = len(head1), l2 = len(head2);
        int x = abs(l1-l2);
        if(l2>l1){
            swap(head1,head2);
        }
        Node *temp = head1;
        while(x){
            temp = temp->next;
            x--;
        }
        
        Node*temp2 = head2;
        while(temp && temp2){
            if(temp==temp2) return temp->data;
            temp = temp->next;
            temp2 = temp2->next;
        }
        return -1;
    }
};



//{ Driver Code Starts.


/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;
        
        Solution ob;
        cout << ob.intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends