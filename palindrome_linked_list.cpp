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

bool isPalindrome(ListNode *head)
{
    vector<int> v;
    ListNode *temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != v[v.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    return 0;
}