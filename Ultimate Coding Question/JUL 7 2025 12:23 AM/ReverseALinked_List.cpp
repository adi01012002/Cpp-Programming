#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node(int val){
        this->next=NULL;
        this->val=val;
    }
};
Node*reverselinklist(Node*head){
    if(!head||!head->next) return head;
    Node*newNode=reverselinklist(head->next);
    head->next->next=head;
    head->next=NULL;
    return newNode;
}

void Print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;

    Print(a);

    Node*temp=reverselinklist(a);
    cout<<endl;

    Print(temp);


}