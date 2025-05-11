#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int>&v,int start,int end){
    int pivot=v[start];
    int i=start;
    for(int j=start+1;j<=end;j++){
        if(v[j]<=pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i],v[start]);
    return i;
}
void QuickSort(vector<int>&v,int start,int end){
    if(start<end){
        int pIdx=Partition(v,start,end);
        QuickSort(v,start,pIdx-1);  // left Sort
        QuickSort(v,pIdx+1,end);    // right Sort
    }

}
void PrintArray(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v={7,1,3,9,5,2,4,8,4,6};
    int n=v.size();
    PrintArray(v);
    QuickSort(v,0,n-1);
    PrintArray(v);


}