#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// Display a Queue

void display(queue<int> &q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        int x=q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
// remove element at even position

void removeAteven(queue<int> &q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
}

// Reverse the Queue using Stack

void reverse(queue<int> &q){
    stack<int> st;
     int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q; // push ,pop ,front->top , size, empty , back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    // cout<<q.size()<<endl;
    // cout<<q.front();
    // cout<<endl<<q.back()<<endl;
    // q.pop();
    //  cout<<q.size()<<endl;
    // cout<<q.front();
    // cout<<endl<<q.back();

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Without function 

    // int n=q.size();
    // for(int i=0;i<n;i++){
    //     cout<<q.front()<<" ";
    //     int x=q.front();
    //     q.pop();
    //     q.push(x);
    // }
    // cout<<endl<<q.size()<<endl;
    // cout<<q.front();
    // cout<<endl<<q.back()<<endl;

    display(q);
    reverse(q);
    display(q);
    reverse(q);
    // cout<<q.size()<<endl;
    // cout<<q.front();
    // cout<<endl<<q.back()<<endl;
    removeAteven(q);
    display(q);
}