#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node *copyRandomList(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    unordered_map<Node *, Node *> map;

    Node *temp = head;
    Node *prev = new Node(-1);
    Node *tempp = prev;
    while (temp != nullptr)
    {
        Node *newnode = new Node(temp->val);
        tempp->next = newnode;

        map[temp] = newnode;

        tempp = tempp->next;
        temp = temp->next;
    }
    tempp->next = nullptr;

    temp = head;
    tempp = prev->next;

    while (temp != NULL)
    {
        if (temp->random == nullptr)
        {
            tempp->random = nullptr;
            tempp = tempp->next;
            temp = temp->next;
            continue;
        }

        tempp->random = map[temp];

        temp = temp->next;
        tempp = tempp->next;
    }

    return prev->next;
}

int main()
{

    return 0;
}