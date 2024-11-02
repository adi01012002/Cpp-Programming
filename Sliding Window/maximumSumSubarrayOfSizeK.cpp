#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7, 100, 2, 15, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int i = 1;
    int j = k;
    int prevSum = 0;
    int maxSum=INT16_MIN;
    for (int i = 0; i < k; i++)
    {
        prevSum += arr[i];
    }
    int maxIdx = 0;
    maxSum = prevSum;
    while (j < n)
    {
        int currSum = prevSum + arr[j] - arr[i - 1];
        if (maxSum < currSum)
        {
            maxSum = currSum;
                maxIdx = i;
        }
        prevSum = currSum;
        i++;
        j++;
    }
    cout << maxSum << endl;
    cout << maxIdx;
}