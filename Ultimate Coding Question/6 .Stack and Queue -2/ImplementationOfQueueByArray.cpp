#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    vector<int>v;
    
    void enqueue(int val){
        v.push_back(val);
    }
    void dequeue(){
        if(v.empty()){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        // for(int i=0;i<v.size()-1;i++){
        //     v[i]=v[i+1];
        // }
        // v.pop_back();
        v.erase(v.begin());
    }

    void size(){
        cout<<v.size()<<endl;
    }

    void rear(){
        if(v.empty()){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        cout<<v[v.size()-1]<<endl;
    }
    
    void front(){
        if(v.empty()){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        cout<<v[0]<<endl;
    }

    bool isFull(){
        return !v.empty();
    }

    bool isEmpty(){
        return v.empty();
    }

};
int main(){

    Queue q;
    q.enqueue(10);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    q.front();
    q.rear();

}