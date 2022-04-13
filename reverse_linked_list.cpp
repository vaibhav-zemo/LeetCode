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

ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    ListNode *root = head;
    ListNode *rev = reverseList(head->next);
    ListNode *temp = rev;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = root;
    root->next = NULL;

    return rev;
}

int main()
{

    return 0;
}