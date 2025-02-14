#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,4,5,9,15,18,21};
    int target=18;
    int lo=0;
    int hi=arr.size()-1;
    bool flag=false;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==target){
            cout<<"present"<<endl;
            flag=true;
            break;
        }
        else if (arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false)cout<<"Not Present"<<endl;

}