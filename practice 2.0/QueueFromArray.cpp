#include <bits/stdc++.h>
using namespace std;
class Queue{
public:
    int f;
    int b;
    // int arr[5];
    vector<int>arr;
    Queue(int val){
        f=0;
        b=0;
        vector<int>v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is Full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(f-b==0){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        f++;
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f==0)return true;
        else return false;
    }
    int front(){
        if(b-f==0){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(b-f==0){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    // q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.push(100);
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<boolalpha<<q.empty();
    
}