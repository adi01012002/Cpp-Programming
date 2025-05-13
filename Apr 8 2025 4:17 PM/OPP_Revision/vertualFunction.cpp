#include<bits/stdc++.h>
using namespace std;


// Abstract Base Class
class Animal{
    public:
        virtual void makeSound1(){
            cout<<"hello"<<endl;
        };
        virtual void anotherSound() const =0;
};


class Cat:public Animal{
    public:
        void anotherSound() const override{
            cout<<"sound 1"<<endl;
        }
        void makeSound1() override{
            cout<<"meow"<<endl;
        }
};
int main(){
    Cat c1;
    c1.makeSound1();
    c1.anotherSound();

}