#include <iostream>

using namespace std;

int setBit(int a, int b)
{
    int count = 0;
    while (a != 0)
    {

        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }

    while (b != 0)
    {

        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Number of set bit is " << setBit(a, b);
    return 0;
}