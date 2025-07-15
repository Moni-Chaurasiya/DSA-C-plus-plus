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

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int size(Node *head)
{
    Node *temp = head;
    int n = 0;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}

void displayrec(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    displayrec(head->next);
}
void reverseDisplay(Node *head)
{
    if (head == NULL)
        return;
    reverseDisplay(head->next);
    cout << head->val << " ";
}
void insertAtEnd(Node *head, int val)
{
    Node *t = new Node(val);
    while (head->next != NULL)
        head = head->next;
    head->next = t;
}
int main()
{
    // Creating linked list nodes
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // Connecting nodes to form a linked list: 10 -> 20 -> 30 -> 40
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    // Using pointer manipulation
    Node *ptr = &b;
    
    // Modifying the value of node b through pointer
    (*ptr).val = 60;
    ptr->val = 60;

    // Outputting the value of node b (now modified)
    cout << b.val << endl; // Output: 60

    // Changing value of node b through pointer
    ptr->val = 40;

    // Outputting the value of node b (reset back to original value)
    cout << b.val << endl; // Output: 40

    // Demonstrating different ways to access node values through pointers
    cout << (*(a.next)).val; // Output: 40
    cout << endl;
    cout << a.next->val << endl; // Output: 40

    // Modifying value of node c indirectly through node a's next pointer
    (a.next)->val = 70;
    cout << b.val << endl; // Output: 70

    // Traversing the linked list from node a to node d
    cout << ((a.next)->next)->val << endl;       // Output: 30
    cout << (((a.next)->next)->next)->val << endl; // Output: 40
    cout << (*((*((*(a.next)).next)).next)).val << endl; // Output: 40

    // Traversing and printing the linked list using a temporary node
    Node temp = a;
    while (temp.next != NULL)
    {
        cout << temp.val << " ";
        temp = *(temp.next);
    }
    cout << endl;

    // Creating a linked list using dynamic memory allocation
    Node *p = new Node(10);
    Node *q = new Node(20);
    Node *r = new Node(30);
    Node *s = new Node(40);
    p->next = q;
    q->next = r;
    r->next = s;

    // Outputting values of nodes using pointers
    cout << (*p).val << endl; // Output: 10
    cout << (*q).next << endl; // Output: Address of node r (next node)
    
    // Traversing and printing the linked list using a temporary pointer
    Node *tem = p;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << p->next->val << endl; // Output: 20
    cout << p->next->next->val << endl; // Output: 30
    
    return 0;
}
