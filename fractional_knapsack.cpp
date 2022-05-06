#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item
{
    int value;
    int weight;
};

bool cmp(Item a, Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, Item arr[], int n)
{
    sort(arr, arr + n, cmp);
    int tempW = 0;
    double ans = 0.00;

    for (int i = 0; i < n; i++)
    {
        if (tempW + arr[i].weight <= W)
        {
            tempW += arr[i].weight;
            ans += arr[i].value;
        }
        else
        {
            int remain = W - tempW;
            double temp = (arr[i].value / (double)arr[i].weight) * (double)remain;
            ans += temp;
            break;
        }
    }
    return ans;
}

int main()
{

    return 0;
}