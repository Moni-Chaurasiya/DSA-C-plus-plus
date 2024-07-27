#include <iostream>
#include <vector>
using namespace std;

bool EqualSumRecursive(vector<int> &arr, int sum, int n)
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
        return EqualSumRecursive(arr, sum, n - 1);
    }
    else
    {

        return EqualSumRecursive(arr, sum - arr[n - 1], n - 1) ||
               EqualSumRecursive(arr, sum, n - 1);
    }
}

bool EqualSumMemorization(vector<int> &arr, int sum, int n, vector<vector<int>> &memo)
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
        memo[n][sum] = EqualSumMemorization(arr, sum, n - 1, memo);
        return memo[n][sum];
    }
    else
    {
        memo[n][sum] = EqualSumMemorization(arr, sum - arr[n - 1], n - 1, memo) ||
                       EqualSumMemorization(arr, sum, n - 1, memo);
        return memo[n][sum];
    }
}

bool EqualSumTabulation(vector<int> &arr, int sum, int n)
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

    int n = arr.size();
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
    }
    if (totalsum % 2 != 0)
    {
        return false;
    }
    else
    {
        bool ans = EqualSumRecursive(arr, totalsum / 2, n);
        cout << ans << endl;
    }
    if (totalsum % 2 != 0)
    {
        return false;
    }
    else
    {
        vector<vector<int>> memo(n + 1, vector<int>(totalsum / 2 + 1, -1));
        bool answer = EqualSumMemorization(arr, totalsum / 2, n, memo);
        cout << answer << endl;
    }
    if (totalsum % 2 != 0)
    {
        return false;
    }
    else
    {
        bool ans2 = EqualSumTabulation(arr, totalsum / 2, n);
        cout << ans2 << endl;
        return 0;
    }
}