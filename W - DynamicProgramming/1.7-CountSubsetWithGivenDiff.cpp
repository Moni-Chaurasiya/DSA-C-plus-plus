#include <iostream>
#include <vector>
using namespace std;

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

    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }
    int diff = 4;
    int sum = (diff + totalSum) / 2;

    int ans = CountSubsetTabulation(arr, sum, n);
    cout << ans << endl;
    return 0;

    /*
    Q-1--> In the given array put  + or - in front of each element of array and after that plus all positive and all negative value from array. Count how many possible subset is their whose difference[sum of positive- sum of negative] is targetSum.

    targetSum problem is same as above only style of asking question is difference
    */
}