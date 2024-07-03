#include <iostream>
using namespace std;

class Node
{ // User defined data type
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList
{ // User defined data structure
public:
    Node *head;
    Node *tail;
    int size = 0;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
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

    void insertAtIndex(int val, int index)
    {
        if (index < 0 || index > size)
        {
            cout << "Index Index" << endl;
            return;
        }
        if (index == 0)
        {
            insertAtHead(val);
            return;
        }
        if (index == size)
        {
            insertAtTail(val);
            return;
        }
        if (index > 0 || index < size)
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i <= index - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "Empty LinkedList" << endl;
            return;
        }
        else if (size == 1)
        {
            head = tail = NULL;
            size--;
            return;
        }
        else
        {
            head = head->next;
            size--;
            return;
        }
    }
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "Empty LinkedList" << endl;
            return;
        }
        else if (size == 1)
        {
            head = tail = NULL;
            size--;
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
            size--;
            return;
        }
    }
    void deleteAtIndex(int index)
    {
        if (size == 0)
        {
            cout << "Index Index" << endl;
            return;
        }
        if (index < 0 || index > size)
        {
            cout << "Index Index" << endl;
            return;
        }
        if (index == 0)
        {
            deleteAtHead();
            return;
        }
        if (index == size - 1)
        {
            deleteAtTail();
            return;
        }
        if (index > 0 || index < size - 1)
        {

            Node *temp = head;
            for (int i = 1; i <= index - 1; i++)
            {
                temp = temp->next;
            }

            temp->next = temp->next->next;
            size--;
        }
    }
};

int main()
{

    LinkedList ll;       //{ }
    ll.insertAtTail(10); //{ 10->NULL}
    ll.insertAtTail(20); //{10->20->NULL}
    ll.insertAtTail(30); //{10->20->30->NULL}
    ll.insertAtTail(40); //{10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(5); //{5->10->20->30->40->NULL}
    ll.insertAtHead(5); //{5->5->10->20->30->40->NULL}
    ll.display();
    ll.insertAtIndex(45, 3);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIndex(3);
    ll.display();
    cout << ll.size;
}