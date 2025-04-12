#include<bits/stdc++.h>
using namespace std;
int solve(int val1,int val2,string ch){
    if(ch=="+")return val1+val2;
    else if(ch=="-")return val1-val2;
    else if(ch=="*")return val1*val2;
    else return val1/val2;
}
int evalRPN(vector<string>tokens){
    stack<int>st;
    for(int i=0;i<tokens.size();i++){
        if(tokens[i].size()>1||isdigit(tokens[i][0])){
            st.push(stoi(tokens[i]));
        }
        else{
            string ch=tokens[i];
            int val2=st.top();
            st.pop();
            int val1=st.top();
            st.pop();
            int ans=solve(val1,val2,ch);
            st.push(ans);
        }

    }
    return st.top();
}
int main(){
    vector<string>tokens={"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    int ans=evalRPN(tokens);
    cout<<ans<<endl;
}