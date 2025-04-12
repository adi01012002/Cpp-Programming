#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int id;
    string name;
    Student(string name,int id){
        this->name=name;
        this->id=id;
    }


    // void display(){
    //     cout<<this->name<<" "<<this->id;
    // }
    // string getName(){
    //     return this->name;                         1st way
    // }
    // int getId(){
    //     return this->id;
    // }
    // void setName(string name){
    //     this->name=name;
    // }
    // void setId(int id){
    //     this->id=id;
    // }



    // void SetData(string name,int id){
    //     this->name=name;
    //     this->id=id;
    // }                                                     2nd way 
    // void GetData(){
    //     cout<<this->id<<" "<<this->name<<" "<<endl;
    // }
};
int main(){

    // Student s1;
    // s1.setName("Ram");
    // s1.setId(1);
    // s1.display();

    // cout<<endl;
    // Student s2;
    // s2.setName("Kaam");
    // s2.setId(12);
    // s2.display();

    // cout<<endl;
    // cout<<s1.getName()<<" "<<s1.getId()<<endl;
    // cout<<s2.getName()<<" "<<s2.getId()<<endl;

    // s1.SetData("Ran",1);
    // s1.GetData();

    Student* s1=new Student("Ram", 1);
    cout<<s1->id<<" "<<s1->name<<endl;

}