#include <iostream>
#include <vector>
using namespace std;

int CountSubsetRecursive(vector<int> &arr, int sum, int n)
{
    // Base case
    if (sum == 0)
    {
        return 1;
    }

    if (n == 0)
    {
        return 0;
    }

    // If sum is more than arr value, then this item cannot be included in the optimal solution
    if (arr[n - 1] > sum)
    {
        return CountSubsetRecursive(arr, sum, n - 1);
    }
    else
    {

        return CountSubsetRecursive(arr, sum - arr[n - 1], n - 1) +
               CountSubsetRecursive(arr, sum, n - 1);
    }
}

int CountSubsetMemorization(vector<int> &arr, int sum, int n, vector<vector<int>> &memo)
{
    // Base case
    if (sum == 0)
    {
        return 1;
    }

    if (n == 0)
    {
        return 0;
    }

    if (memo[n][sum] != -1)
    {
        return memo[n][sum];
    }
    // If sum is more than arr value, then this item cannot be included in the optimal solution
    if (arr[n - 1] > sum)
    {
        memo[n][sum] = CountSubsetMemorization(arr, sum, n - 1, memo);
        return memo[n][sum];
    }
    else
    {
        memo[n][sum] = CountSubsetMemorization(arr, sum - arr[n - 1], n - 1, memo) +
                       CountSubsetMemorization(arr, sum, n - 1, memo);
        return memo[n][sum];
    }
}

int CountSubsetTabulation(vector<int> &arr, int sum, int n)
{
    // Create a table to store results of subproblems
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
    for (int i = 0; i <= n; ++i)
    {
        dp[i][0] = 1; // A sum of 0 is possible with any number of elements (by choosing an empty subset)
    }

    // Build dp[][] in bottom up manner
    for (int i = 1; i <= n; ++i)
    {
        for (int w = 1; w <= sum; ++w)
        {

            if (arr[i - 1] <= w)
            {
                dp[i][w] = dp[i - 1][w - arr[i - 1]] + dp[i - 1][w];
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

    vector<int> arr = {2, 3, 7, 8, 4, 5};
    int sum = 10;
    int n = arr.size();
    int ans = CountSubsetRecursive(arr, sum, n);
    cout << ans << endl;

    vector<vector<int>> memo(n + 1, vector<int>(sum + 1, -1));
    int answer = CountSubsetMemorization(arr, sum, n, memo);
    cout << answer << endl;

    int ans2 = CountSubsetTabulation(arr, sum, n);
    cout << ans2 << endl;
    return 0;
}