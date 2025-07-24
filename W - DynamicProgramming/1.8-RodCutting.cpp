#include <iostream>
#include <vector>
using namespace std;

// Recursive approach (Unbounded Knapsack for Rod Cutting with fixed sizes)
int maxProfitRecursive(int length[], int price[], int n, int totalLength) {
    if (totalLength == 0) return 0;
    int maxProfit = 0;
    for (int i = 0; i < n; ++i) {
        if (length[i] <= totalLength) {
            int currentProfit = price[i] + maxProfitRecursive(length, price, n, totalLength - length[i]);
            maxProfit = max(maxProfit, currentProfit);
        }
    }
    return maxProfit;
}

// DP Tabulation (Bottom-Up)
int maxProfitDP(int length[], int price[], int n, int totalLength) {
    vector<int> dp(totalLength + 1, 0);

    for (int i = 1; i <= totalLength; ++i) {
        for (int j = 0; j < n; ++j) {
            if (length[j] <= i) {
                dp[i] = max(dp[i], price[j] + dp[i - length[j]]);
            }
        }
    }
    return dp[totalLength];
}

int main() {
    int length[] = {5, 9, 3, 8};     // Fixed lengths available
    int price[] = {10, 25, 7, 20};   // Corresponding prices
    int n = sizeof(length) / sizeof(length[0]);
    int totalLength = 20;            // Total rod length

    int maxProfitRec = maxProfitRecursive(length, price, n, totalLength);
    cout << "Maximum profit using Recursion: " << maxProfitRec << endl;

    int maxProfitTab = maxProfitDP(length, price, n, totalLength);
    cout << "Maximum profit using DP (Tabulation): " << maxProfitTab << endl;

    return 0;
}
