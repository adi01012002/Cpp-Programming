#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
    Node*head;
    Node*tail;
    int size;
    Deque(){
        head=tail=NULL;
        size=0;
    }
    void pushBack(int val){
        Node*temp=new Node(val);
        if(size==0){
            cout<<"Queue is Empty"<<endl;
        }
        
    }
};
int main(){

}