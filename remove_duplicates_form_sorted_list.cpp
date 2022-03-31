#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *temp = head;
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    set<int> s;
    while (temp != NULL)
    {
        s.insert(temp->val);
        temp = temp->next;
    }

    ListNode *newlist = new ListNode(0);
    temp = newlist;
    for (int x : s)
    {
        ListNode *node = new ListNode(x);
        temp->next = node;
        temp = temp->next;
    }

    newlist = newlist->next;
    return newlist;
}

int main()
{

    return 0;
}