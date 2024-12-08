#include<stdio.h>
using namespace std;
int main(){
    int num,*pnum;
    pnum=&num;
    printf("Enter num :");
    scanf("%d",pnum);
    printf("num is : %d\n",*pnum);
    printf("%p\n",pnum);
    printf("%d",num);
    // Summary
    // I conclude from this code is that num is variable which store value,
    // and pnum store the address of varible num where num is store in memory,
    // *pnum gives the value as * is derefrence operator (it gives value stored at this addres),
    // and pnum gives the address of variable 
}