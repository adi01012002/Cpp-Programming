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

class Linklist{
public:
    Node*head;
    Node*tail;
    Linklist(){
        head=NULL;
        tail=NULL;
    }
    void pushAtFront(int val){
        Node*newNode=new Node(val);
        // if(head==NULL&&tail==NULL){
        //     newNode->next=head;
        //     head=newNode;
        //     tail=head;
        // }
        if(head==NULL&&tail==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }

    void pushAtBack(int val){
        Node*newNode=new Node(val);
        if(head==NULL&&tail==NULL){
            tail=newNode;
            head=newNode;
        }
        else {
            tail->next=newNode;
            tail=tail->next;
        }
    }
    void display(){
        Node*temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    void PopFront(){
        if(head==NULL){
            cout<<"List is Empty"<<endl;
            return;
        }
        Node*temp=head;
        head=head->next;
        delete temp;

    }
    void PopBack(){
        if(head==NULL){
            cout<<"List is Empty"<<endl;
            return;
        }
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        Node*t1=tail;
        tail=temp;
        tail->next = NULL;
        delete t1;
    }
};
int main(){
    Linklist l1;
    l1.pushAtFront(10);
    l1.pushAtBack(20);
    l1.pushAtBack(30);
    l1.pushAtBack(40);
    l1.pushAtBack(50);
    l1.pushAtFront(60);
    l1.pushAtFront(70);
    l1.display();
    cout<<endl;
    l1.PopFront();
    l1.PopBack();
    l1.display();

}