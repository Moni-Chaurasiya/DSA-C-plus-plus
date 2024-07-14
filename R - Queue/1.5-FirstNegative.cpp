#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    // First Negative in each window of size k
    int arr[] = {1, 2, -3, 2, -4, -5, 8, 0, -5, -5, 9};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    queue<int> q;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }
    int i = 0;

    while (i + k - 1 < n)
    {

        while (q.size() != 0 && q.front() < i)
        {
            q.pop();
        }

        if (q.size() == 0 || q.front() >= i + k)
        {
            ans.push_back(0);
        }

        else
        {
            ans.push_back(arr[q.front()]);
        }
        i++;
    }
    for (unsigned int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}