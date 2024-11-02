#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 6, 7, 8, 9, 4, 4, 11, 12, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    // formation of prifix sum
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }
    for (int el : arr)
    {
        cout << el << " ";
    }
    cout<<endl;

    // check for any idx which can divide array into two part with equal part //
    int idx=-1;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"YES, It can be partitioned "<<" after i = "<<idx;
    else cout<<"NO, it can't be Partitioned"<<" "<<idx;
    cout<<endl;
    
}