#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {4, 3, 9, 6, 7, 2, 3, 4, 6, 7, 7, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    /*

        // Next greater element
        // Brute Force Method.
        // T.C--> O(n^2), S.C--> O(n)
        int ans[n];
        ans[n - 1] = -1;
        for (int i = 0; i < n - 1; i++)
        {
            ans[i] = -1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i])
                {
                    ans[i] = arr[j];
                    break;
                }
            }
        }

     */

    // Using Stack:-> pop, ans, push
    stack<int> st;
    int ans[n];
    ans[n - 1] = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() > 0 && st.top() <= arr[i])
        {
            st.pop();
        }
        // mark the ans in ans array.
        if (st.size() == 0)
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}