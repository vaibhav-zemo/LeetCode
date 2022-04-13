#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int length(ListNode *head)
{
    ListNode *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    int l1 = length(headA);
    int l2 = length(headB);

    int diff = abs(l1 - l2);
    ListNode *temp1 = headA;
    ListNode *temp2 = headB;
    if (l1 > l2)
    {
        while (diff--)
        {
            temp1 = temp1->next;
        }
    }
    else if (l2 > l1)
    {
        while (diff--)
        {
            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1 == temp2)
        {
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return NULL;
}

int main()
{

    return 0;
}