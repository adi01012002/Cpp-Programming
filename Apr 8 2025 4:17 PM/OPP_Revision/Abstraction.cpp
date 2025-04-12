#include<bits/stdc++.h>
using namespace std;

// Abstract Base class
class Animal{
public:
    // pure Virtual Function
    virtual void makeSound() const =0;  // const can be removed

    // virtual destructor
    virtual ~Animal(){}
};

class Dog:public Animal{
public:
    void makeSound()const override{  // const override can be remove 
        cout<<"Woof"<<endl;
    }
};

class Cat:public Animal{
public:
    void makeSound()const override{   // from this too
        cout<<"meow"<<endl;
    }
};
int main(){
    Animal*myDog=new Dog();
    Animal*myCat=new Cat();
    myDog->makeSound();
    myCat->makeSound();
    delete myCat;
    delete myDog;
    return 0;
}