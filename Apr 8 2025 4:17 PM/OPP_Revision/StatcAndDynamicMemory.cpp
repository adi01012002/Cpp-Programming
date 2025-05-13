#include<bits/stdc++.h>
using namespace std;
class student {
    public:
        string name;
        student(string name){
            this->name=name;
        }

        void display(){
            cout<<"name = "<<name<<" ";
        }
};
int main(){
    student * s1= new student("kia");
    s1->display();
    delete s1;
}