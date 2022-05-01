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

class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        vector<int> v;
        for (int i = 0; i < lists.size(); i++)
        {
            ListNode *head = lists[i];
            while (head != nullptr)
            {
                v.push_back(head->val);
                head = head->next;
            }
        }
        sort(v.begin(), v.end());
        ListNode *ans = new ListNode(INT_MIN);
        ListNode *temp = ans;
        for (int i = 0; i < v.size(); i++)
        {
            ListNode *newNode = new ListNode(v[i]);
            temp->next = newNode;
            temp = temp->next;
        }
        temp->next = NULL;
        return ans->next;
    }
};

int main()
{

    return 0;
}