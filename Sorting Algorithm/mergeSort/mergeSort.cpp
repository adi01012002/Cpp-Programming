#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
            res[k++] = a[i++];

        else
        {
            res[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < a.size())
        res[k++] = a[i++];

    while (j < b.size())
    {
        res[k] = b[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int>&v){
    int n=v.size();
    // int n1=n/2;
    // int n2=n-n/2;
    // vector<int>a(n1);
    // vector<int>b(n2);
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    // vector<int>a(n1),b(n2);
    // //copy pasting
    // for(int i=0;i<n1;i++){
    //     a[i]=v[i];
    // }
    vector<int>a(v.begin(),v.begin()+n1);
    vector<int>b(n2);
     for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    

    // vector<int>b(n2);

    // magic 
    mergeSort(a);
    mergeSort(b);

   // merge two sorted array 
    merge(a,b,v);
    a.clear();
    b.clear();
    // cout<<a.size()<<","<<b.size()<<endl;
}
int main()
{
    // int arr[] = {1, 4, 5, 8, 13, 15, 16, 18, 34};
    // int n1 = sizeof(arr) / sizeof(arr[0]);
    // vector<int> a(arr, arr + n1);
    // int brr[] = {2, 3, 6, 7, 10, 12};
    // int n2 = sizeof(brr) / sizeof(brr[0]);
    // vector<int> b(brr, brr + n2);
    // vector<int> res(n1 + n2);
    // merge(a, b, res);
    // for (int el : res)
    // {
    //     cout << el << " ";
    // }

    int arr[] = {5, 1, 46, 3, 0, 9, 7, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    mergeSort(v);
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}