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
Node*merge(Node*l1,Node*l2){
    Node*tl1=l1;
    Node*tl2=l2;
    Node*dummy=new Node(100);
    Node*dt=dummy;

    while(tl1&&tl2){
        if(tl1->val<tl2->val){
            dt->next=tl1;
            dt=dt->next;
            tl1=tl1->next;
        }
        else{
            dt->next=tl2;
            dt=dt->next;
            tl2=tl2->next;
        }
        if(tl1==NULL){
            dt->next=tl2;
        }
        else{
            dt->next=tl1;
        }
    }
    return dummy->next;
}
Node*mergeSort(Node*head){
    if(!head||!head->next)return head;
    Node*slow=head,*fast=head,*prev=NULL;
    while(fast&&fast->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=NULL;
    Node*l1=mergeSort(slow);
    Node*l2=mergeSort(head);
    return merge(l1,l2);
}
void display(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(8);
    Node*c=new Node(13);
    Node*d=new Node(12);
    Node*e=new Node(25);
    Node*f=new Node(26);
    Node*g=new Node(43);
    Node*h=new Node(17);
    Node*i=new Node(19);
    Node*j=new Node(35);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    h->next=i;
    i->next=j;
    display(a);
    Node*head=mergeSort(a);
    display(head);

}