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
Node* removeNthFromEnd(Node*head,int k){
    int len=0;
    Node*temp=head;
    while (temp){
      len+=1;
      temp=temp->next;  
    }
    if(len==k){
        head=head->next;
        return head;
    }
    temp=head;
    Node*prev=NULL;
    for(int i=0;i<len-k;i++){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    return head;
}
Node* removeNthFromEnd2(Node*head,int k){
    Node*temp=head;
    for(int i=0;i<k;i++){
        temp=temp->next;
    }
    Node*t1=head;
    Node*t2=NULL;
    while(temp){
        t2=t1;
        temp=temp->next;
        t1=t1->next;
    }
    if(temp==NULL){
        return head->next;
    }
    t2->next=t1->next;
    return head;
}


int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    Node*e=new Node(50);
    Node*f=new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    display(a);
    a=removeNthFromEnd2(a,6);
    display(a);

}