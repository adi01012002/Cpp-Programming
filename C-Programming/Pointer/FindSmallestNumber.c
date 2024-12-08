#include <stdio.h>
void readArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
}
void findSmallest(int *arr, int n, int *pos, int *smlst)
{
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) < *smlst)
        {
            *smlst = *(arr + i);
            *pos = i;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    readArray(arr, n);
    printArray(arr, n);
    int pos, smlst = 100;
    findSmallest(arr, n, &pos, &smlst);
    printf("Smallest Number is %d present at %d", smlst, pos);
    printf("\n");
}
