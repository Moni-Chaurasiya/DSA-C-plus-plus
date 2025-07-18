#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/*
Minimum Cost to Connect Ropes
You are given n ropes of different lengths.
You need to connect them all into one rope.
The cost of connecting two ropes is sum of their lengths.
Find the minimum total cost to connect all ropes.
*/
int MinCostToConnectRope(vector<int> &stones)
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

    int ans = MinCostToConnectRope(rope);
    cout << ans << endl;
}
/*

### ✅ The "Total Cost" is **Cumulative**

At each step:

* You **connect two ropes**
* The **cost of that connection** is **added to total cost**
* The **resulting new rope** is pushed back into the heap
  (So it can be used in the next steps)

---

### 📝 Dry Run with Clear Cumulative Cost Explanation:

#### Starting Heap:

```
1 2 4 7 8
```

---

#### Step 1 — Connect 1 and 2:

* Cost of this connection = `1 + 2 = 3`
* **Total Cost = 3**
* Push back `3`
  Heap now:

```
3 4 7 8
```

---

#### Step 2 — Connect 3 and 4:

* Cost of this connection = `3 + 4 = 7`
* **Total Cost = previous total (3) + this cost (7) = 10**
* Push back `7`
  Heap now:

```
7 7 8
```

---

#### Step 3 — Connect 7 and 7:

* Cost of this connection = `7 + 7 = 14`
* **Total Cost = previous total (10) + this cost (14) = 24**
* Push back `14`
  Heap now:

```
8 14
```

---

#### Step 4 — Connect 8 and 14:

* Cost of this connection = `8 + 14 = 22`
* **Total Cost = previous total (24) + this cost (22) = 46**
* Heap now:

```
22
```

---

### ✅ Final Answer:

```
46
```

---

### ✅ In simple words:

> You are summing up the cost of every two ropes you connect.
> That sum becomes part of the **total cost**.
> And this happens at **every step** until only one rope remains.

This is the **Greedy Algorithm** for minimizing the total cost of merging ropes —
Always connect the two smallest ropes first.

*/