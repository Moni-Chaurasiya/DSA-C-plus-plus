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
int main()
{
    // reorder the queue --> 1,5,2,6,3,7,4,8
    queue<int> q;
    stack<int> st;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    // q.push(9);
    // q.push(10);
    int n = q.size();
    // pop the first half of queue and store in stack
    for (unsigned int i = 0; i < n / 2; i++)
    {
        st.push(q.front());
        q.pop();
    }
    // push back in queue from stack
    while (st.size() != 0)
    {
        q.push(st.top());
        st.pop();
    }
    // pop the second half which is now first half of queue and store in stack
    for (unsigned int i = 0; i < n / 2; i++)
    {
        st.push(q.front());
        q.pop();
    }

    while (st.size() != 0)
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // reverse queue
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
    display(q);
}