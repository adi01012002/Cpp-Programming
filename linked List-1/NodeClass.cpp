#include <iostream>
using namespace std;
class Node
{       // user definde data type and Here, Node is being defined as a type that
public: // represents a single node in a linked list.
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val; // this is a pointer that points to the object itself.
        this->next = NULL;
    }
};

int main()
{
    // 10 20 30 40 50
    //  a.val=10; gives error -> "a" was not declared in this scope

    // Node a;
    // a.val=10;
    // Node b;
    // b.val=20;
    // Node c;
    // c.val=30;
    // Node d;
    // d.val=40;
    // Forming linked list
    // a.next=&b;
    // b.next=&c;
    // c.next=&d;
    // d.next=NULL;
    Node a(10);
    Node b(20);
    // b.val=29;
    Node c(30);
    Node d(40);
    Node e(50);
    // e.val=10;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    cout << a.val << endl;
    cout << a.next << endl;
    cout << b.val << endl;

    // Node* ptr=&b;
    // ptr->val=60;
    // cout<<ptr->val<<endl;

    // (*ptr).val=80;
    // cout<<(*ptr).val<<endl;

    // cout<<(*(a.next)).val<<endl;
    // a.next->val=70;

    // cout<<(a.next)->val<<endl;
    // cout<<(b.next)->val;
    Node temp = a;
    while (1)
    {
        cout << temp.val << " ";
        if (temp.next == NULL)
            break;
        temp = *(temp.next);
    }
}
