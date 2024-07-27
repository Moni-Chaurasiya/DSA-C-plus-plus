/*
1. 0-1 Knapsack --> SubSet Sum
                    Equal Sum Partition
                    Count of Subset Sum
                    Minimum Subset Sum Diff
                    Target Sum
                    # Of subset gives
2. Unbounded Knapsack
3. Fibonacci
4. L.C.S
5. L.I.S
6. Kadane's Algorithm
7. Matrix chain multiplication
8. DP on Trees
9. DP on Grid
10.Others
*/
// Dynamic Programming => Recursive --> Memorization --> TOP_DOWN (DP)
// Base condition --> Think of the smallest valid input
#include <iostream>
#include <vector>
using namespace std;
int fibo(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
    return dp[n];
}
int fib(int n)
{
    vector<int> dp(n + 1, -1);
    return fibo(n, dp);
}
int main()
{
    int n = 5;
    cout << fib(n);
}
