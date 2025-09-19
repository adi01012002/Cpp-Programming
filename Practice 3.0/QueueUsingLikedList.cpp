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
class MyQueue{
public:
    Node*front;
    Node*back;
    MyQueue(){
        this->front=NULL;
        this->back=NULL;
    }
    void push(int val){
        Node*NewNode=new Node(val);
        if(front==NULL){
            front=NewNode;
            back=NewNode;
        }
        else{
            back->next=NewNode;
            back=back->next;
        }
    }
    void display(){
        Node*temp=front;
        while (temp)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
        
    }
    void Pop(){
        if(front==NULL){
            cout<<"Empty Queue !";
        }
        Node*temp=front;
        front=front->next;
        delete temp;
    }
};
int main(){

    MyQueue q;

    int choice,value;
    while(1){
    cin>>choice;
    switch (choice)
    {
    case 1:
        cin>>value;
        q.push(value);
        break;
    case 2:
        q.Pop();
        break;
    case 3:
        q.display();
        break;
    case 4:
        return 0;
    default:
        cout<<"Wrong Choice !";
    }
}
}