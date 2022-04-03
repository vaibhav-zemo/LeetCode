#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int> &heights)
{
    int l = heights.size();
    vector<int> left(l), right(l);
    stack<int> st;

    for (int i = 0; i < l; i++)
    {
        if (st.empty())
        {
            left[i] = 0;
        }
        else
        {
            while (!st.empty() && heights[st.top()] >= heights[i])
            {
                st.pop();
            }
            left[i] = st.empty() ? 0 : st.top() + 1;
        }
        st.push(i);
    }

    while (!st.empty())
    {
        st.pop();
    }

    for (int i = l - 1; i >= 0; i--)
    {
        if (st.empty())
        {
            right[i] = l - 1;
        }
        else
        {
            while (!st.empty() && heights[st.top()] >= heights[i])
            {
                st.pop();
            }
            right[i] = st.empty() ? l - 1 : st.top() - 1;
        }
        st.push(i);
    }

    int maxarea = -1;
    for (int i = 0; i < l; i++)
    {
        maxarea = max(maxarea, ((right[i] - left[i] + 1) * heights[i]));
    }
    return maxarea;
}

int main()
{

    return 0;
}