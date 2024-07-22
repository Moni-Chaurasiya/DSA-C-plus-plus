#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int lastStoneWeight(vector<int> &stones)
{
    int n = stones.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        pq.push(stones[i]);
    }
    while (pq.size() > 1)
    {
        int h = pq.top();
        pq.pop();
        int l = pq.top();
        pq.pop();
        int ans = h + l;
        cost += ans;
        pq.push(ans);
    }
    return cost;
}
int main()
{
    vector<int> rope = {1, 2, 4, 7, 8};

    int ans = lastStoneWeight(rope);
    cout << ans << endl;
}