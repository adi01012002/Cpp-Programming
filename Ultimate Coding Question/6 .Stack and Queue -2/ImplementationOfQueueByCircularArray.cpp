#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    int size;
    int capacity;
    int front;
    vector<int>v;
    Queue(int n){
        v.resize(n);
        capacity = n;
        size = 0;
        front = 0;
    }
    void enqueue(int val){
        if(size==capacity){
            cout<<"Queue is full"<<endl;
            return;
        }
        int rear=(front+size)%capacity;  // rear yehi to rahega matlab front hamara 2 par hai 
        v[rear]=val;                    // aur size hamara 3 hai to rear to 5 par hi rahega
        size=size+1;
    }

    int dequeue(){
        if(size==0)return -1;
        int res=v[front];
        front=(front+1)%capacity;   // yaha forn ko 1 + kar rahe hai bas 
        size--;
        return res;
    }
    int rear(){
        if(size==0){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        int rear=(front+size-1)%capacity;
        return v[rear];
    }
    
    int fronti(){
        if(size==0){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return v[front];
    }
};
int main(){

    Queue q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<q.dequeue()<<endl;
    q.enqueue(50);
    q.enqueue(60);
    cout<<q.rear()<<endl;
    cout<<q.fronti();



}