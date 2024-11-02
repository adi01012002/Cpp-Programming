#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int printMin(vector<int>arr,int i){
    if(i>=arr.size()) return INT16_MAX;
    return min(arr[i],printMin(arr,i+1));
}
int printMax(vector<int>arr,int i){
    if(i>=arr.size()) return INT16_MIN;
    return max(arr[i],printMax(arr,i+1));
}
int main(){
    vector<int> arr = {9,8,4,7,4,2,15,1,2};
    int n = arr.size();
    cout<<printMax(arr,0);
    cout<<endl;
    cout<<printMin(arr,0);
   
}