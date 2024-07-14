#include <iostream>
#include <deque>
using namespace std;
// Deque Implimentation using doubly LinkedList
// Implement addFront(),addRear(),getFront(), getRear(),deleteFront(),deleteRear(), s().

class Node
{ // Doubly linklist node
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque
{ // User defined data structure
public:
    Node *head;
    Node *tail;
    int s = 0;
    Deque()
    {
        head = tail = NULL;
        s = 0;
    }
    void pushBack(int val)
    {
        Node *temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else
        {
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
    void pushFront(int val)
    {
        Node *temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else
        {
            temp->prev = NULL;
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
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

    void popFront()
    {
        if (s == 0)
        {
            cout << "Empty LinkedList" << endl;
            return;
        }
        else if (s == 1)
        {
            head = tail = NULL;
            s--;
            return;
        }
        else
        {
            head = head->next;
            s--;
            return;
        }
    }
    void popBack()
    {
        if (s == 0)
        {
            cout << "Empty LinkedList" << endl;
            return;
        }
        else if (s == 1)
        {
            head = tail = NULL;
            s--;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            s--;
            return;
        }
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
    Deque ll;        //{ }
    ll.pushBack(10); //{ 10->NULL}
    ll.pushBack(20); //{10->20->NULL}
    ll.pushBack(30); //{10->20->30->NULL}
    ll.pushBack(40); //{10->20->30->40->NULL}
    ll.display();
    ll.pushFront(25); //{5->10->20->30->40->NULL}
    ll.pushFront(5);  //{5->5->10->20->30->40->NULL}
    ll.display();

    ll.display();
    ll.popFront();
    ll.display();
    ll.popBack();
    ll.display();

    ll.display();
    cout << ll.s;

    deque<int> dq;
    dq.push_back(50);
    // Leetcode 622--> Implement Circular Queue
}