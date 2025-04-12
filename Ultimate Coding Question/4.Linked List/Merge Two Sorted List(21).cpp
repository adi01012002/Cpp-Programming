#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* mergeList(Node*l1,Node*l2){

    Node*dummy=new Node(-100);
    Node*du=dummy;
    while(l1!=NULL&&l2!=NULL){
        if(l1->val<l2->val){
            du->next=l1;
            l1=l1->next;
            du=du->next;
        }
        else{
            du->next=l2;
            l2=l2->next;
            du=du->next;
        }
    }
    if(l1!=NULL)du->next=l1;
    if(l2!=NULL)du->next=l2;
    return dummy->next;
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    Node*e=new Node(50);
    Node*f=new Node(60);
    Node*g=new Node(70);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;


    Node*h=new Node(12);
    Node*i=new Node(22);
    Node*j=new Node(35);
    // Node*k=new Node(98);
    h->next=i;
    i->next=j;
    // j->next=k;
    display(a);
    display(h);
    Node*temp=mergeList(a,h);
    display(temp);
    
}


// Node*h=new Node(12);
// Node*i=new Node(22);
// Node*j=new Node(35);
// Node*k=new Node(98);
// h->next=i;
// i->next=j;
// j->next=k;