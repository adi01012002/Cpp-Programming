#include<stdio.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
union unionIntro
{
    int a;
    // int b;
   char name[41];

};

int main(){
 union unionIntro student;
//  struct unionIntro student;
scanf("%d",&student.a);
// scanf("%s",student.name);
//  student.a=20;
//  cout<<sizeof(student.a);
//  printf("%d\n",student.a);
//  cout<<sizeof(student.name);
  strcpy(student.name, "Aditya Sharma");
//  student.name = "Aditya Sharma";
 cout<<student.a<<student.name;
//  printf("%s\n",student.name);
 //  student.b=30;
//  printf("%d\n",student.b);
cout<<sizeof(student);
}