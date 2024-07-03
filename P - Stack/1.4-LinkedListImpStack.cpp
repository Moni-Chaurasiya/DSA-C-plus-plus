#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class Stack
{ // user defined data structure
public:
    Node *head;
    int size;

    Stack()
    {
        head = NULL;
        size = 0;
    }

    int val;

    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << " Stack is Empty" << endl;
            return;
        }
        size--;
    }
    int top()
    {

        if (head == NULL)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        return head->val;
    }

    void print(Node *temp)
    {
        if (temp == NULL)
            return;
        print(temp->next);
        cout << temp->val << " ";
    }
    void display()
    {
        Node *temp = head;
        print(temp);
        cout << endl;
    }

    void displayRev()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
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
    cout << st.size << endl;
    cout << st.top() << endl;
    st.displayRev();
    st.display();
}