#include <iostream>
using namespace std;
int main()
{
    int arr[] = {77, 42, 35, 12, 101, 5};
    for (int i = 0; i < 6; i++)
    {
        int min = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
        }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}