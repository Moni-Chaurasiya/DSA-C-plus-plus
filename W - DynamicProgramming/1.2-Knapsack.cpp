#include <iostream>
#include <vector>
using namespace std;

int knapsackRecursive(vector<int> &weights, vector<int> &values, int capacity, int n)
{
    // Base case
    if (n == 0 || capacity == 0)
    {
        return 0;
    }

    // If weight of the nth item is more than Knapsack capacity, then this item cannot be included in the optimal solution
    if (weights[n - 1] > capacity)
    {
        return knapsackRecursive(weights, values, capacity, n - 1);
    }
    else
    {
        // Return the maximum of two cases:
        // 1. nth item included
        // 2. not included
        return max(values[n - 1] + knapsackRecursive(weights, values, capacity - weights[n - 1], n - 1),
                   knapsackRecursive(weights, values, capacity, n - 1));
    }
}

int knapsackMemoization(vector<int> &weights, vector<int> &values, int capacity, int n, vector<vector<int>> &memo)
{
    // Base case
    if (n == 0 || capacity == 0)
    {
        return 0;
    }

    // If the value is already calculated, return it from memoization table
    if (memo[n][capacity] != -1)
    {
        return memo[n][capacity];
    }

    // If weight of the nth item is more than Knapsack capacity, then this item cannot be included in the optimal solution
    if (weights[n - 1] > capacity)
    {
        memo[n][capacity] = knapsackMemoization(weights, values, capacity, n - 1, memo);
        return memo[n][capacity];
    }
    else
    {
        // Store the value in memoization table before returning
        memo[n][capacity] = max(values[n - 1] + knapsackMemoization(weights, values, capacity - weights[n - 1], n - 1, memo),
                                knapsackMemoization(weights, values, capacity, n - 1, memo));
        return memo[n][capacity];
    }
}

int knapsackTabulation(vector<int> &weights, vector<int> &values, int capacity, int n)
{
    // Create a table to store results of subproblems
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Build dp[][] in bottom up manner
    for (int i = 0; i <= n; ++i)
    {
        for (int w = 0; w <= capacity; ++w)
        {
            if (i == 0 || w == 0)
            {
                dp[i][w] = 0;
            }
            else if (weights[i - 1] <= w)
            {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}
int main()
{
    vector<int> weights = {10, 20, 30};
    vector<int> values = {60, 100, 120};
    int capacity = 50;
    int n = values.size();
    cout << knapsackRecursive(weights, values, capacity, n) << endl; // Output: 220

    vector<vector<int>> memo(n + 1, vector<int>(capacity + 1, -1));
    cout << knapsackMemoization(weights, values, capacity, n, memo) << endl; // Output: 220

    cout << knapsackTabulation(weights, values, capacity, n) << endl; // Output: 220
    return 0;
}
