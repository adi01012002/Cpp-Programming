#include <bits/stdc++.h>
using namespace std;

// Pop Efficient Methode
// 

class MyQueue{
    private:
        stack<int> st;
        stack<int> help;
    
    public:
        void push(int val){
            st.push(val);
        }
        int pop(){
            if(st.size()==0){
                cout<<"Empty Queue";
                return -1;
            }
            while(!st.empty()){
                int top=st.top();
                st.pop();
                help.push(top);
            }
            int top=help.top();
            help.pop();
            while(!help.empty()){
                int top=help.top();
                help.pop();
                st.push(top);
            }
            return top;
        }
        int peek(){
            if(st.size()==0){
                cout<<"Empty Queue";
                return -1;
            }
            while(!st.empty()){
                int top=st.top();
                st.pop();
                help.push(top);
            }
            int top=help.top();
            while(!help.empty()){
                int top=help.top();
                help.pop();
                st.push(top);
            }
            return top;
        }
        bool empty(){
            if(st.size()==0)return true;
            else return false;
        }
        void display(){
            while(!st.empty()){
                int top=st.top();
                st.pop();
                help.push(top);
            }
            while(!help.empty()){
                int top=help.top();
                cout<<top<<" ";
                help.pop();
                st.push(top);
            }
        }
    };
int main(){
    MyQueue q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // cout<<q.pop()<<endl;
    // cout<<q.peek()<<endl;
    // q.display();

    int choice,value;
    while(cin>>choice){
        switch (choice)
        {
        case 1:
            cin>>value;
            q.push(value);
            break;
        case 2:
            cout<<q.pop();
            break;
        case 3:
            cout<<q.peek();
            break;
        case 4:
            cout<<boolalpha<<q.empty();
            break;
        default:
            cout<<"Wrong Choice";
            return 0;
            break;
        }
    }
}