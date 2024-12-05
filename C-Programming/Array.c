#include <bits/stdc++.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int brr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", brr[i]);
    }
}