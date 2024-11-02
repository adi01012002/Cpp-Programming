#include <iostream>
using namespace std;
int main()
{
    int arr[] = {77, 42, 35, 12, 101, 5}; // There are n = 6 element in the list so there is n-1 passes 
    for (int i = 0; i < 6 - 1; i++)        //  means 5 passes occur to sort the list.
    {
        for (int j = 0; j < 6 - 1 - i; j++) //TC =>O(N**2) 
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
cout<<endl;
    // Optimised Bibble Sort TC => O(n) in the case of best case.

    int arr1[] = {7, 10, 11, 12, 14, 15};  
    for (int i = 0; i < 6 - 1; i++)        
    {    bool flag=true;
        for (int j = 0; j < 6 - 1 - i; j++) 
        {
            if (arr1[j] > arr1[j + 1])
            {
                swap(arr1[j], arr1[j + 1]);
                flag =false;
            }
        }
        if(flag==true) break;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
    
}