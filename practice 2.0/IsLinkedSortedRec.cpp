#include <bits/stdc++.h>
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
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return;
}
bool checkForSort(Node*head){
    if(head==NULL||head->next==NULL)return true;
    if(head->val>head->next->val){
        return checkForSort(head->next);
    }
    else return false;
}

int main()
{
    Node *a = new Node(8);
    Node *b = new Node(7);
    Node *c = new Node(5);
    Node *d = new Node(2);
    Node *e = new Node(1);
    Node *f = new Node(-2);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    // display(a);
    cout<<boolalpha;
    cout<<checkForSort(a);
}