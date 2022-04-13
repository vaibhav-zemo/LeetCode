#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    if (head->next==NULL)
    {
        return NULL;
    }
    
    ListNode *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }

    int k = size - n;
    if (k==0)
    {
        return head->next;
    }
    
    int cnt = 0;
    temp = head;
    while (cnt < k-1)
    {
        temp = temp->next;
        cnt++;
    }
    temp->next = temp->next->next;
    return head;
}

int main()
{

    return 0;
}