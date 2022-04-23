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

ListNode *reverse(ListNode *head, int cnt)
{
    if (head == NULL || cnt == 0)
    {
        return NULL;
    }

    ListNode *root = head;
    ListNode *newNode = reverse(head->next, cnt--);
    ListNode *temp = newNode;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = root;
    root->next = NULL;
    return root;
}

ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *root = head;
    bool flag = true;
    ListNode *newList = new ListNode(-1);
    while (root != NULL)
    {
        int cnt = 0;
        ListNode *temp = root;
        ListNode *rev = reverse(root, k);
        ListNode *revtemp = rev;
        while (temp->next != NULL)
        {
            revtemp = revtemp->next;
        }

        while (cnt < k)
        {
            temp = temp->next;
            cnt++;
        }

        revtemp->next = temp;
        root = temp;
        if (flag)
        {
            newList = rev;
            flag = false;
        }
    }

    return newList->next;
}

int main()
{

    return 0;
}