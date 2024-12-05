#include <bits/stdc++.h>
struct num {
    int a,b,c;
    int largest;
};
int main(){
    struct num n;
    scanf("%d %d %d",&n.a,&n.b,&n.c);
    printf("The Three Numbe are : %d %d %d" ,n.a,n.b,n.c);
    printf("\n");
    if(n.a>n.b&&n.a>n.c) n.largest=n.a;
    else if(n.b>n.a&&n.b>n.c)n.largest=n.b;
    else n.largest=n.c;
    printf("The largest Number is : %d\n",n.largest);
}