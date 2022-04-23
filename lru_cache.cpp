#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

class LRUCache
{
    unordered_map<int, int> map;
    int cnt;
    Node *head = new Node(-1);
    Node *tail = new Node(-2);

public:
    LRUCache(int capacity)
    {
        head->next = tail;
        tail->prev = head;
        cnt = capacity;
    }

    int get(int key)
    {

        if (!map.count(key))
        {
            return -1;
        }

        Node *temp = tail;
        while (temp != head && temp->val != key)
        {
            temp = temp->prev;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->prev = head;
        head->next = temp;
        return map[key];
    }

    void put(int key, int value)
    {
        if (map.size() < cnt)
        {
            Node *box = new Node(key);
            head->next->prev = box;
            box->next = head->next;
            box->prev = head;
            head->next = box;

            map[key] = value;
            return;
        }

        int val = head->next->val;
        map.erase(val);
        map[key] = value;
        return;
    }
};

int main()
{

    return 0;
}