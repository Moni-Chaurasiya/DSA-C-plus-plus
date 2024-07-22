#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pqLarge;
    pqLarge.push(10);
    pqLarge.push(2);
    pqLarge.push(-6);
    pqLarge.push(8);
    int n = pqLarge.top(); // Top element is the biggest number from queue.
    cout << "Largest Element " << n << " ";
    /*
    If we want a DS in which we can always get the max or min element at any priority of time then we use priority_queue(heaps).
    Time Complexity -->
    top()-> O(1)
    push(x)->O(logn)
    pop()->O(logn)

    */
    
    priority_queue<int, vector<int>, greater<int>> pqSmall;
    pqSmall.push(10);
    pqSmall.push(2);
    pqSmall.push(-6);
    pqSmall.push(8);
    int m = pqSmall.top(); // Top element is the smallest number from queue.
    cout << "Smallest Element " << m << " ";

    // Q-1:- Find the kth smallest element in a given array.

    // top()->O(1)
    // push(x)->O(logn)---(current size)
    // pop()->O(logn)---(n= pq.size();)

    // If we insert 'n' element in a heap,
    // log(1)+ log(2)+ log(3)... log(n)--> log(n!) = nlogn

    /*
    for(int i=1;i<k;i++){ --> K.logn
    cout<<pq.top();
    pq.pop();
    }
    */

    int arr[] = {10, 20, 4, 5, 18, 24, 1, -7, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    priority_queue<int> pq;
    for (int i = 0; i < size; i++) // kth smallest element
    {
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    cout << pq.top();
    // T.C--> O(n*logk)
    // S.C--> O(n) (total Space)
    // Extra Space--> O(k)
}