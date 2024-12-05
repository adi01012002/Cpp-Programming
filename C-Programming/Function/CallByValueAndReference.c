#include<stdio.h>
void add(int a){
    a=a+10;
    printf("Value of a in called function = %d\n",a);
}

void add(int *b){
    *b=*b+10;
    printf("Value of a in called function = %d\n",*b);
}
int main(){


    ///  Call by value 
    // int a=2;
    // printf("Value of a before calling function = %d",a);
    // printf("\n");
    // add(a);
    // printf("Value of a after calling function = %d\n",a);
    /// Call by Reference
    int b=3;
    printf("Value of a before calling function = %d\n",b);
    add(&b);
    printf("Value of a after calling function = %d\n",b);

}



