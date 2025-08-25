#include<bits/stdc++.h>
using namespace std;
int findPivotIndex(const vector<int>& v) {
    int left = 0, right = v.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (v[mid] > v[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}
int main(){
    vector<int>v={4,5,6,8,9,0,1,2,3};
    int left=0;
    int right=v.size()-1;
    while(left<right){
        int mid=left+(right-left)/2;
        if(v[mid]>v[right]){
            left=mid+1;
        }   
        else{
            right=mid;
        }
    }
    cout<<v[left]<<" "<<v[right];


    // int left=0;
    // int right=v.size()-1;   // left part is sorted or right part is sorted 
    // int target=7;
    // bool flag=false;
    // while(left<=right){
    //     int mid=left+(right-left)/2;
    //     if(v[mid]==target){
    //         flag=true;
    //         break;
    //     }
    //     if(v[left]<=v[mid]){  // left part is sorted
    //         if(v[left]<=target && target<v[mid]){ // target left part me hi hai
    //             right=mid-1;
    //         }
    //         else left=mid+1;
    //     }
    //     else { // right part is sorted
    //         if(v[mid]<target && target>=v[right]){ // target right part me hi hai
    //             left=mid+1;
    //         }
    //         else right=mid-1;
    //     }
    // }

    // cout<<boolalpha<<flag<<endl;
    // cout<<left<<" "<<right<<endl;

    // int pivot = findPivotIndex(v);
    // cout << "Pivot index: " << pivot << ", value: " << v[pivot] << endl;
}