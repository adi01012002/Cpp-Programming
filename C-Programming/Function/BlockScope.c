#include <stdio.h>
int main()
{
    int x = 10;
    int i = 0;
    printf("The Value of x outside the while loop is %d\n", x);
    while (i < 3)
    {
        x = i;
        printf("The Value of x inside the while loop is %d\n", x);
        i++;
        // printf("%d",x);
    }
    printf("The Value of x outside the while loop is %d\n", x);
}