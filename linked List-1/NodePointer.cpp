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
    Node *temp = head; // TC => O(N) and SC => O(1) for only one node
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int count(Node *head)
{
    Node *temp = head;
    int c = 0;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
void insertAtEnd(Node *head, int val)
{
    Node *t = new Node(val);
    while (head->next != NULL) head = head->next;
    head->next = t;
}
void displayrec(Node *head)
{                      // Printing via Recursion
    Node *temp = head; // TC => O(N) and SC => O(N) stack frame
    if (temp == NULL)  // Base case
        return;
    cout << temp->val << " "; // kaam  //     Reverse this and below line to print linked list in reverse order
    displayrec(temp->next); // call
}
int main()
{
    Node *a = new Node(10); // creating a node which has value 10 and next has NULL
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    insertAtEnd(a, 80);
    display(a);
    // cout<<a->next->next->next->val;
    //  Node* temp=a;
    // while (temp!=NULL)
    // {
    //     cout<<temp->val<<endl;
    //     temp=temp->next;
    // }
    // display(a);
    displayrec(a);
    cout << count(a);
}