#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;
};

Node *flatten(Node *head)
{
    if (!head)
    {
        return nullptr;
    }
    vector<Node *> v;
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        if (temp->child != nullptr)
        {
            if (temp->next != NULL)
            {
                v.push_back(temp->next);
                temp->next->prev = nullptr;
            }
            temp->next = temp->child;
            temp->child->prev = temp;
            temp->child = nullptr;
        }
        prev = temp;
        temp = temp->next;
    }
    temp = prev;
    while (!v.empty())
    {
        Node *left = v.back();
        v.pop_back();
        temp->next = left;
        left->prev = temp;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
    }

    return head;
}

int main()
{

    return 0;
}