#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        virtual void makeSound()const =0; 
};
class Cat: public Animal{
    public:
        void makeSound()const override{
            cout<<"meow"<<endl;
        }
};
int main(){
    // Animal s;  wrong way we can not instantiate abstract class class
    Animal* s = new Cat();
    s->makeSound();
}