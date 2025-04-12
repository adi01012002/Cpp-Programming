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
void display(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* middleNode(Node* head) {
    Node*slow= head;
    Node*fast= head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast->next==NULL)return slow;
    else return slow->next;

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
    display(a);
    Node*ans=middleNode(a);
    cout<<ans->val<<endl;
    // display(a);

}