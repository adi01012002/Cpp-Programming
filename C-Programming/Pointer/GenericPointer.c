#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    // int n1=10;
    // char ch ='A';
    // void *ptr;
    // ptr=&n1;
    // printf("n1 = %d\n",*(int *)ptr);
    // ptr=&ch;
    // printf("ch = %c\n",*(char *) ptr);
    // cout<<sizeof(int);
    printf("%ld\n",sizeof(int));  // 4
    printf("%ld\n",sizeof(char));  // 1
    printf("%ld\n",sizeof(float));  // 4
    printf("%ld\n",sizeof(double));  // 8
}