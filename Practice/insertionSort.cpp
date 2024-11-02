#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 3, 1, 4, 2};
    for (int i = 1; i < 5; i++)
    {
        // int j=i;
        for (int j = i; j >= 1; j--)
        {
            if (arr[j] > arr[j - 1])
                break;
            else
                swap(arr[j], arr[j - 1]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}