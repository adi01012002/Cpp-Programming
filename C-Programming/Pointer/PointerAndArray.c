#include<stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    typeof(arr) *ptr = &arr; // typeof(arr) resolves to 'int [6]'
    printf("First element: %d\n", (*ptr)[0]); // Dereference ptr and access the first element
    return 0;
}


// printf("Address of array : %p %p %p",arr,&arr,&arr[0]);
// printf("\n");
// for(int i=0;i<6;i++){
//     printf("%d ",*(arr+i));
// }
// int *ptr1,*ptr2;
// ptr1=arr;
// ptr2=ptr1+2;
// printf("%ld\n",ptr2-ptr1);