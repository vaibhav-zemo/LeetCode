#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *swapNodes(ListNode *head, int k)
{
    ListNode *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }

    int lastk = l - k + 1;

    int cnt = 1;
    temp = head;
    while (cnt < k)
    {
        temp = temp->next;
        cnt++;
    }

    ListNode *temp2 = head;
    cnt = 1;
    while (cnt < lastk)
    {
        temp2 = temp2->next;
        cnt++;
    }

    int c = temp->val;
    temp->val = temp2->val;
    temp2->val = c;

    return head;
}

int main()
{

    return 0;
}