#include <iostream>
using namespace std;
// Array implementation of stack.
class Stack
{ // user defined data structure
public:
    int arr[5];
    int idx = -1;
    int val;
    void push(int val)
    {
        if (idx == 4)
        {
            cout << "stack is full" << endl; // overflow
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop()
    {
        if (idx == -1)
        {
            cout << "stack is empty" << endl; // underflow
            return;
        }
        idx--;
    }
    int top()
    {

        if (idx == -1)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        return arr[idx];
    }
    int size()
    {
        return idx + 1;
    }
    void display()
    {
        for (int i = 0; i <= idx; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Stack st;
    st.push(50);
    st.push(40);
    st.push(35);
    st.push(20);
    st.push(35);
    // st.push(20);
    st.pop();
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.display();
}