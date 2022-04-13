#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int s1 = length(l1);
    int s2 = length(l2);

    int diff = abs(s1 - s2);

    ListNode *temp1 = l1;
    ListNode *temp2 = l2;

    ListNode *ans = new ListNode(-1);
    ListNode *temp = ans;

    if (l1 > l2)
    {
        while (diff--)
        {
            temp->next = temp1;
            temp = temp->next;
            
            temp1 = temp1->next;
        }
    }
    else
    {
        while (diff--)
        {
            temp->next = temp1;
            temp = temp->next;

            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL && temp2 != NULL)
    {
        int sum = temp1->val + temp2->val;
        int rem = sum % 10;

        ListNode *t = new ListNode(rem);
        temp->next = t;
        temp = temp->next;

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return ans->next;
}

int main()
{

    return 0;
}