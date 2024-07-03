#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Using Stack:-> pop, ans, push
    stack<int> st;
    int ans[n];
    ans[0] = 1;
    st.push(0);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }

        // ans[i] = st.empty() ? (i + 1) : (i - st.top());
        if (st.size() == 0)
            ans[i] = -1;
        else
            ans[i] = st.top();
        ans[i] = i - ans[i];
        st.push(i);
    }
    cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     ans[i] = i - ans[i];

    // }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}