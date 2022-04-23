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
    int l = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL || k == 0 || head->next == NULL)
    {
        return head;
    }

    int l = length(head);
    k %= l;

    if (k == 0)
    {
        return head;
    }

    int cnt = l - k - 1;
    int c = 0;
    ListNode *temp = head;
    while (c < cnt)
    {
        temp = temp->next;
        c++;
    }
    ListNode *newList = temp->next;
    temp->next = NULL;
    temp = newList;
    while (temp->next != NULL && temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    return newList;
}

int main()
{

    return 0;
}