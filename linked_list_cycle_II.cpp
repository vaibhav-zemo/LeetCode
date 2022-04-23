#include <iostream>
#include <unordered_map>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *detectCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    unordered_map<ListNode *, int> map;
    ListNode *temp = head;
    while (temp != NULL)
    {
        map[temp]++;

        if (map[temp] > 1)
        {
            return temp;
        }

        temp = temp->next;
    }
    return NULL;
}

int main()
{

    return 0;
}