#include <iostream>
#include <vector>
using namespace std;

bool SumSetRecursive(vector<int> &arr, int sum, int n)
{
    // Base case
    if (n == 0)
    {
        return false;
    }

    if (sum == 0)
    {
        return true;
    }

    // If sum is more than arr value, then this item cannot be included in the optimal solution
    if (arr[n - 1] > sum)
    {
        return SumSetRecursive(arr, sum, n - 1);
    }
    else
    {

        return SumSetRecursive(arr, sum - arr[n - 1], n - 1) ||
               SumSetRecursive(arr, sum, n - 1);
    }
}

bool SumSetMemorization(vector<int> &arr, int sum, int n, vector<vector<int>> &memo)
{
    // Base case
    if (n == 0)
    {
        return false;
    }

    if (sum == 0)
    {
        return true;
    }

    if (memo[n][sum] != -1)
    {
        return memo[n][sum];
    }
    // If sum is more than arr value, then this item cannot be included in the optimal solution
    if (arr[n - 1] > sum)
    {
        memo[n][sum] = SumSetMemorization(arr, sum, n - 1, memo);
        return memo[n][sum];
    }
    else
    {
        memo[n][sum] = SumSetMemorization(arr, sum - arr[n - 1], n - 1, memo) ||
                       SumSetMemorization(arr, sum, n - 1, memo);
        return memo[n][sum];
    }
}

bool SumSetTabulation(vector<int> &arr, int sum, int n)
{
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

    return dp[n][sum];
}

int main()
{

    vector<int> arr = {2, 3, 7, 8, 4};
    int sum = 23;
    int n = arr.size();
    bool ans = SumSetRecursive(arr, sum, n);
    cout << ans << endl;

    vector<vector<int>> memo(n + 1, vector<int>(sum + 1, -1));
    bool answer = SumSetMemorization(arr, sum, n, memo);
    cout << answer << endl;

    bool ans2 = SumSetTabulation(arr, sum, n);
    cout << ans2 << endl;
    return 0;
}