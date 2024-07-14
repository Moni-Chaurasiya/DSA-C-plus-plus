// Queue--> push and pop are done in opposite direction.
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 1; i <= n; i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
void reverseHalf(queue<int> &q, int k)
{
    stack<int> st;
    queue<int> tempQueue;

    // Push the first half of the elements into the stack
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    // Push the second half of the elements into the temporary queue
    while (!q.empty())
    {
        tempQueue.push(q.front());
        q.pop();
    }
    // Push elements from the stack back into the queue (they will be reversed)
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    // Push the elements from the temporary queue back into the main queue
    while (!tempQueue.empty())
    {
        q.push(tempQueue.front());
        tempQueue.pop();
    }
}

void reverse(queue<int> &q)
{

    stack<int> st;
    while (q.size() != 0)
    {
        st.push(q.front());
        q.pop();
    }
    while (st.size() != 0)
    {
        q.push(st.top());
        st.pop();
    }
    cout << endl;
}
// Remove all the element present at even positions in queue .
void removeEven(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            q.pop();
        }
        else
        {
            int x = q.front();
            cout << x << " ";
            q.pop();
            q.push(x);
        }
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    // push, pop, front->top, size, empty, back.
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.pop(); // O(1)
    // Overflow--> only happens if we implement the queue via an array if you fill the array you are out of memory.
    // Underflow--> whenever the queue is empty & we try to use it.
    display(q);
    cout << q.front() << endl; // O(1)
    cout << q.back() << endl;  // O(1)
    cout << q.size() << endl;
    reverseHalf(q, 4);
    display(q);
    reverse(q);

    display(q);
    removeEven(q);
}
