#include <iostream>
#include <vector>
using namespace std;
// Vector implementation of stack.
class Stack
{ // user defined data structure
public:
    vector<int> arr;

    int val;
    void push(int val) // No overflow condition
    {
        arr.push_back(val);
    }

    void pop()
    {
        if (arr.size() == 0)
        {
            cout << "stack is empty" << endl; // underflow
            return;
        }
        arr.pop_back();
    }
    int top()
    {

        if (arr.size() == 0)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        return arr[arr.size() - 1];
    }
    int size()
    {
        return arr.size();
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
}