#include <iostream>
#include <vector>
using namespace std;

class MyHashMap
{
private:
    int *arr = new int[1000001];

public:
    MyHashMap()
    {
        for (int i = 0; i <= 1000000; i++)
        {
            arr[i] = -1;
        }
    }

    void put(int key, int value)
    {
        arr[key] = value;
    }

    int get(int key)
    {
        return arr[key];
    }

    void remove(int key)
    {
        arr[key] = -1;
        return;
    }
};

int main()
{

    return 0;
}