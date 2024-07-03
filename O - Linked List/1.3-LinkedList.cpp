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
    cout << endl;
}
// Deleting node
Node *deleteNode(Node *head, Node *target)
{
    if (head == target)
    {
        head = head->next;
        return head;
    }
    Node *temp = head;
    while (temp->next != target)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}

// Deleting nodeValue
Node *deleteNode(Node *head, int targetVal)
{
    if (head->val == targetVal)
    {
        head = head->next;
        return head;
    }
    Node *temp = head;
    while (temp->next->val != targetVal)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
int main()
{
    // Creating linked list
    Node *p = new Node(10);
    Node *q = new Node(20);
    Node *r = new Node(30);
    Node *s = new Node(40);
    Node *t = new Node(50);
    p->next = q;
    q->next = r;
    r->next = s;
    s->next = t;
    Node *head = p;
    display(head);
    head = deleteNode(p, p);
    display(head);
    head = deleteNode(p, 40);
    display(head);
}
/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        // if for any node "temp" we want to check/get the value of
        //           temp->next then please firstly check if temp itself != null

        while( fast->next!=NULL && fast!=NULL ){  // it will through error

        while(fast!=NULL && fast->next!=NULL){  //O(n)

         slow=slow->next;
         fast=fast->next->next;

       }
       return slow;


     //second solution
     int len=0;
     ListNode* temp=head;
       while(temp !=NULL){  //O(n)
         len++;
         temp=temp->next;

       }
       int idx=len/2;
       ListNode* mid=head;
       for(int i=0;i<idx;i++){
        mid=mid->next;
       }
       return mid;


    }
};
*/