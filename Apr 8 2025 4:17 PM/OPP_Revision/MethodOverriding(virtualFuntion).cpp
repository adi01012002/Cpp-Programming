#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
    virtual void makeSound(){};

};
class Cat : public Animal{
    void makeSound(){
        cout<<"Cat Sound"<<endl;
    }
};
int main(){
    // Animal*b;
    // Cat c;
    // b=&c;
    Animal*b=new Cat();
    b->makeSound();

}


// #include <bits/stdc++.h>
// using namespace std;
// class Base_class{
// public:
// virtual void show(){
// cout << "Apni Kaksha base" << endl;
// }
// };
// class Derived_class : public Base_class{
// public:
// void show(){
// cout << "Apni Kaksha derived" << endl;
// }

// };
// int main(){
// Base_class* b;
// Derived_class d;
// b = &d;
// b->show(); // prints the content of show() declared in derived class 
// return 0;}