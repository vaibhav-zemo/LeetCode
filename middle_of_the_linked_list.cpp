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

ListNode *middleNode(ListNode *head)
{

    ListNode *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }

    int cnt = 0;
    temp = head;
    while (cnt < (size / 2))
    {
        temp = temp->next;
        cnt++;
    }

    return temp;
}

int main()
{

    return 0;
}