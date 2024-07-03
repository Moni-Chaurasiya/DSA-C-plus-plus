#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->next = NULL;
        this->val = val;
    }
};

class DNode
{
public:
    int val;
    DNode *next;
    DNode *prev;
    DNode(int val)
    {
        this->next = NULL;
        this->prev = NULL;
        this->val = val;
    }
};

// Singly Circular Linked List
class circularLinkedList
{
public:
    Node *head;
    Node *tail;
    int size = 0;
    circularLinkedList()
    {
        tail = head = NULL;
        size = 0;
    }
    void display()
    {
        if (head == NULL)
            return; // Check if the list is empty
        Node *temp = head;
        do
        {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (size == 0)
        {
            head = tail = newNode;
            tail->next = head; // Create the circular link
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head; // Maintain the circular link
        }

        size++;
    }
};

// Doubly Circular Linked List
class DcircularLinkedList
{
public:
    DNode *head;
    DNode *tail;
    int size = 0;
    DcircularLinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void display2()
    {
        if (head == NULL)
            return; // Check if the list is empty
        DNode *temp = head;
        do
        {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
    void dinsertAtTail(int val)
    {
        DNode *newNode = new DNode(val);
        if (size == 0)
        {
            head = tail = newNode;
            tail->next = head; // Create the circular link
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            tail->next = head; // Maintain the circular link
            head->prev = tail;
        }

        size++;
    }
};

int main()
{
    // Singly Circular Linked List
    circularLinkedList ll; //{ }
    ll.insertAtTail(10);   //{ 10->NULL}
    ll.insertAtTail(20);   //{10->20->NULL}
    ll.insertAtTail(30);   //{10->20->30->NULL}
    ll.insertAtTail(40);   //{10->20->30->40->NULL}
    ll.display();

    // Doubly Circular Linked List
    DcircularLinkedList list; //{ }
    list.dinsertAtTail(10);   //{ 10->NULL}
    list.dinsertAtTail(20);   //{10->20->NULL}
    list.dinsertAtTail(30);   //{10->20->30->NULL}
    list.dinsertAtTail(40);   //{10->20->30->40->NULL}
    list.display2();
}