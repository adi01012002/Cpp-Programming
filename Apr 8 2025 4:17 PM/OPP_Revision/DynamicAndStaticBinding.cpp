#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        void makeSound(){
            cout<<"base class";   // no polymorphism // static binding happen at commplie time
        }

        virtual void anotherSound(){
            cout<<"Animal Sound";     // Dynamic Binding happen at runtime
        }
};

class Cat : public Animal{
    public:
        void makeSound(){
            cout<<"Derived Class";
        }
    void anotherSound() override{
        cout<<"Cat Sound";
    }
};
int main(){

    Animal* a=new Cat();
    a->makeSound();
    cout<<endl;
    a->anotherSound();

}