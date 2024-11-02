#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float marks;
    // Student(string n, int r, float m)
    // {
    //     name = n;
    //     rno = r;
    //     marks = m;
    // }

    Student(string name, int rno, float marks)
    {
        (*this).name = name; // ====>>>>  (*this).name  ==  this->name
        this->rno = rno;
        this->marks = marks;
    }
};
void change(Student *s)
{
    s->name = "Adit";
}
int main()
{
    // Student s("Aditya", 17, 96.5);
    // Student *ptr = &s;
    // cout << s.rno<<endl;
    // (*ptr).rno=18;    // wawy of modification
    // cout << s.rno<<endl;
    // ptr->rno=19;    // way of modification
    // cout << s.rno;
    // s.name="Aditya";
    // s.marks=96.5;
    // s.rno=17;
    // cout << s.rno;


    // Student s("Aditya", 17, 96.5);
    // cout << s.name << endl;
    // change(&s);
    // cout << s.name << endl;

    // same things are with also this 

    Student* s= new Student("Aditya", 17, 96.5);
    // Student s("Aditya", 17, 96.5);
    cout << s->name << endl;
    change(s);
    cout << s->name << endl;
}