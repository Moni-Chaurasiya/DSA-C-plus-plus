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

    stack<int> st;
    int ans[n]; // This will store the result for each element
    ans[0] = -1; // For the first element, there's no element to the left of it, hence no greater element to the right
    st.push(0); // Pushing the index of the first element into the stack

    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop(); // Pop elements from the stack as long as they are less than or equal to arr[i]
        }

        // After the while loop, st.top() gives the index of the nearest element greater than arr[i] to its left
        ans[i] = (st.empty()) ? -1 : st.top(); // If stack is empty, no greater element exists to the left of arr[i], hence -1
        st.push(i); // Push the current index i onto the stack
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        ans[i] = (ans[i] == -1) ? -1 : (i - ans[i]); // Calculate the difference between the current index and the index of the nearest greater element to the left
        cout << ans[i] << " ";
    }

    return 0;
}
