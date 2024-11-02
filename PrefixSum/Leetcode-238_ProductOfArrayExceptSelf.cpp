#include <iostream>
#include <vector>
using namespace std;
void method1(int arr[], int n)
{
    int preP[n];
    int sufP[n];
    int ans[n];
    preP[0] = arr[0];
    sufP[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        preP[i] = preP[i - 1] * arr[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        sufP[i] = sufP[i + 1] * arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << preP[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << sufP[i] << " ";
    }
    cout << endl;
    ans[n - 1] = preP[n - 2];
    ans[0] = sufP[1];
    for (int i = n - 2; i > 0; i--)
    {
        ans[i] = preP[i - 1] * sufP[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
void method2(int arr[], int n)
{
    int preP[n];
    int sufP[n];
    int ans[n];
    preP[0] = 1;
    sufP[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        preP[i] = preP[i - 1] * arr[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        sufP[i] = sufP[i + 1] * arr[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << preP[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << sufP[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        ans[i] = preP[i] * sufP[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
void method3(vector<int> arr)
{
    int n = arr.size();
    vector<int> p(n, 1);
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] * arr[i - 1];
    }
    int currSuf = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        int currPre = p[i];
        currSuf = currSuf * arr[i + 1];
        p[i] = currSuf * currPre;
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Method-1"<<endl;
    method1(arr, n);
    cout<<endl;
    cout<<"Method-2"<<endl;
    method2(arr, n);
    cout<<endl;
    cout<<"Method-3"<<endl;
    vector<int> arr1 = {1, 2, 3, 4};
    method3(arr1);
}