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
class Queue
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int s;

    Queue()
    {
        tail = NULL;
        head = NULL;
        s = 0;
    }

    int val;

    void push(int val)
    {
        Node *temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        s++;
    }

    void pop()
    {
        if (s == 0)
        {
            cout << " Queue is Empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        s--;
        delete (temp);
    }
    int front()
    {

        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return head->val;
    }

    int back()
    {

        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return tail->val;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int size()
    {
        return s;
    }
    bool empty()
    {
        if (s == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    Queue q;
    q.push(50);
    q.push(40);
    q.push(35);
    q.push(20);
    q.push(35);
    q.push(20);
    q.display();
    q.pop();
    cout << q.s << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.display();
}