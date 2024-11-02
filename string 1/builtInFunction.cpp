#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){ 

    // lenght function 

    // string str = "My Name is Aditya Sharma";
    // cout<<str.length();
    // cout<<str.size(); 0 to str.size()-1 <- index

    // push_back() 

    // string str ="abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    //  str.push_back('f');
    //   str.push_back('g');
    // cout<<str<<endl;


    //pop_back()

    // string s = "Aditya";
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    //  s.pop_back();
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;


    // "+" Operator to modify string

    // string s ="abcd";
    // string t = "def";
    // s="122"+s; // append  Aage lagana usally modifyr kar rahe hai  
    // cout<<s+t<<endl;


    // reverse() function
    string s = "abcdefghijk";
    cout<<s<<endl;
    // reverse(s.begin()+2,s.end());
    // cout<<s<<endl;
    reverse(s.begin()+2,s.end()-1);
    cout<<s<<endl;
    reverse(s.begin()+2,s.begin()+5); // jaha tak karna ho uske ek jada index dena hota hai
}