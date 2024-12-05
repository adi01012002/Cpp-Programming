#include<stdio.h>
// This is example of call-by-reference in which pass address of variable instead of value
int fun(int& a,int &b,int& c){ // Formal Parameter
    a=20;
    b=10;
    c=30;
    return 0;
}
int main(){
    int a=10;
    int b=20;
    int c;
    scanf("%d",&c);
    fun(a,b,c); // argument or Actual Parameter 
    printf("%d %d %d",a,b,c);
    return 0;
}