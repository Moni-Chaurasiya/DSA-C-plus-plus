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
    // Creating linked list
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    Node *ptr = &b;
    (*ptr).val = 60;
    ptr->val = 60;
    cout << b.val << endl; // 60
    ptr->val = 40;
    cout << b.val << endl; // 40

    cout << (*(a.next)).val; // 40
    cout << endl;
    cout << a.next->val << endl; // 40
    (a.next)->val = 70;
    cout << b.val << endl; // 70

    // a-->d
    cout << ((a.next)->next)->val << endl;               // 30
    cout << (((a.next)->next)->next)->val << endl;       // 40
    cout << (*((*((*(a.next)).next)).next)).val << endl; // 40

    Node temp = a;
    while (temp.next != NULL)
    {
        cout << temp.val << " ";
        if (temp.next == NULL)
            break;
        temp = *(temp.next);
    }

    cout << endl;

    Node *p = new Node(10);
    Node *q = new Node(20);
    Node *r = new Node(30);
    Node *s = new Node(40);
    p->next = q;
    q->next = r;
    r->next = s;
    cout << (*p).val << endl;
    cout << (*q).next << endl;
    Node *tem = p;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << p->next->val << endl;
    cout << p->next->next->val << endl;

    display(p);
    cout << endl;
    cout << size(p) << endl;
    displayrec(p);
    cout << endl;
    reverseDisplay(p);

    display(p);
    insertAtEnd(p, 80);
    display(p);
}