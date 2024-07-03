
// Insertion of element in stack only happens at the top.
// Deletion of element in stack only happens at the top.
// Get element only happen at the top.
/*
Operations on stack.
--> provides us discipline.
--> provides us intuition.
*/
// stack.push(val)-->adds a new element at the top.
// stack.pop()-->removes the topmost element.
// stack.top()-->returns the val at the top.
// stack.size()--> return size of element.
// stack.empty()--> check wheather stack is empty or not.

// Time complexity --> O(1).

// Stack is also called LIFO/FILO.
#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> &st)
{
    // We will use extra stack;
    stack<int> temp;
    while (st.size() > 0)
    {
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    // Putting element back from temp to stack;
    //  st.push(70);
    while (temp.size() != 0)
    {
        cout << temp.top() << " ";
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    cout << endl;
}
void reverse(stack<int> &st)
{
    // Reverse a stack

    stack<int> temp2;
    while (st.size() > 0)
    {
        int x = st.top();
        st.pop();
        temp2.push(x);
    }
    // Putting element from temp2 to temp3;
    stack<int> temp3;
    while (temp2.size() != 0)
    {
        int x = temp2.top();
        temp2.pop();
        temp3.push(x);
    }
    // Putting element back from temp3 to stack;
    while (temp3.size() != 0)
    {
        // cout << temp3.top() << " ";
        int x = temp3.top();
        temp3.pop();
        st.push(x);
    }
}
void pushAtBottom(stack<int> &st, int val)
{
    // We will use extra stack;
    stack<int> temp;
    while (st.size() > 0)
    {
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    // Putting element back from temp to stack;
    st.push(val);
    while (temp.size() != 0)
    {

        int x = temp.top();
        temp.pop();
        st.push(x);
    }
}
void pushAtIndex(stack<int> &st, int val, int idx)
{
    // We will use extra stack;
    stack<int> temp;
    while (st.size() > idx)
    {
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    // Putting element back from temp to stack;
    temp.push(val);
    while (temp.size() != 0)
    {

        int x = temp.top();
        temp.pop();
        st.push(x);
    }
}

void displayRev(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void pushBott(stack<int> &st, int val)
{
    if (st.size() == 0)
    {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushBott(st, val);
    st.push(x);
}
/*
The function reverseBott is designed to reverse the elements of a std::stack<int>. It uses a helper function pushBott to push an element to the bottom of the stack.
*/
void reverseBott(stack<int> &st)
{
    if (st.size() == 1)
        return;

    int x = st.top();

    st.pop();
    reverseBott(st);
    pushBott(st, x);
}
int main()
{
    stack<int> st;
    st.push(10);
    cout << st.size() << endl;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.size() << endl;
    st.pop();
    st.empty();
    cout << st.size() << endl;
    /*

    // Printing in reverse order --> emptying the stack.
    while (st.size() != 0)
    {
        cout << st.top() << " ";
        st.pop();
    }

 */
    pushAtBottom(st, 80);
    print(st);

    pushAtIndex(st, 75, 3);
    print(st);

    reverse(st);
    print(st);

    displayRev(st);
    print(st);

    pushBott(st, -10);
    print(st);

    reverseBott(st);
    print(st);
}
