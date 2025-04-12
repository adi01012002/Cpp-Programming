#include<bits/stdc++.h>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"Base Eat"<<endl;
    }

    void sound(){
        cout<<"General Sound"<<endl;
    }
};

class Cat:public Animal{
public:
    void sound(){
        cout<<"Cat Sound"<<endl;
    }
};
int main(){
    Animal*a=new Cat;
    a->eat();
    a->sound();
    
    // This can also work
    // Cat a;
    // a.eat();
    // a.sound();

}