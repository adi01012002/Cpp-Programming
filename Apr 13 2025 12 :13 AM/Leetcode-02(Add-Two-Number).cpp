#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
Node*Add(Node*l1,Node*l2){
    int carry=0;
    Node*dtemp=new Node(-1);
    Node*temp=dtemp;
    while(l1||l2||carry){
        int val1=(l1)?l1->val:0;
        int val2=(l2)?l2->val:0;
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        temp->next=new Node(sum);
        temp=temp->next;
        if(l1)l1=l1->next;
        if(l2)l2=l2->next;
    }
    Node*res=dtemp->next;
    delete dtemp;
    return res;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main(){
    Node *a = new Node(8);
    Node *b = new Node(4);
    Node *d = new Node(9);
    
    Node *c = new Node(5);
    Node *e = new Node(6);
    Node *f = new Node(4);
    Node *g = new Node(9);
    Node *h = new Node(99);
    a->next = b;
    b->next = d;

    c->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    display(a);
    cout << endl;
    display(c);
    cout<<endl;
    Node*head=Add(a,c);
    display(head);
}