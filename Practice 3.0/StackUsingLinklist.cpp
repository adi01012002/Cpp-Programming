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
Node*top=NULL;
int size;
void Push(int val){
    Node*NewNode=new Node(val);
    NewNode->next=top;
    top=NewNode;
    cout<<"Node is Inserted"<<endl;
    return;
}
void Pop(){
    if(top==NULL){
        cout<<"Empty Stack"<<endl;
        return;
    }
    Node*temp=top;
    cout<<"Popped Element: "<<temp->val<<endl;
    top=top->next;
    delete temp;
    return;
}
void display(){
    if(top==NULL){
        cout<<"Empty Stack"<<endl;
        return;
    }
    Node*temp=top;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}

int main(){
    int choice,value;
    while (1){
        cin>>choice;
        switch (choice)
        {
            case 1:
            cin>>value;
                Push(value);
                break;
            case 2:
                Pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                cout<<"Wrong Choice"<<endl;
                return 0;
        }
    }
    return 0;
}