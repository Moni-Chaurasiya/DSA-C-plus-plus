#include <iostream>
#include <vector>
using namespace std;

int SumSetTabulation(vector<int> &arr, int n)
{
    int sum = 0;
    for (int num : arr)
    {
        sum += num;
    }
    // Create a table to store results of subproblems
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
    for (int i = 0; i <= n; ++i)
    {
        dp[i][0] = true; // A sum of 0 is possible with any number of elements (by choosing an empty subset)
    }

    // Build dp[][] in bottom up manner
    for (int i = 1; i <= n; ++i)
    {
        for (int w = 1; w <= sum; ++w)
        {

            if (arr[i - 1] <= w)
            {
                dp[i][w] = dp[i - 1][w - arr[i - 1]] || dp[i - 1][w];
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    vector<int> v;
    for (int i = 0; i < sum / 2; i++)
    {
        if (dp[n][i] == true)
        {
            v.push_back(i);
        }
    }
    int mn = INT16_MAX;
    for (unsigned int i = 0; i < v.size(); i++)
    {
        mn = min(mn, sum - 2 * v[i]);
    }

    return mn;
}

int main()
{
    vector<int> arr = {2, 3, 7};
    int n = arr.size();
    int ans2 = SumSetTabulation(arr, n);
    cout << ans2 << endl;
    return 0;
}