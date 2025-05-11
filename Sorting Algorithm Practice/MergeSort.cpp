#include<bits/stdc++.h>
using namespace std;
void MergeTwoArray(vector<int>&v,int start,int mid,int end){
    int i=start;
    int j=mid+1;
    int k=0;
    vector<int>b(end-start+1,0);
    while(i<=mid&&j<=end){
        if(v[i]<=v[j]){
            b[k]=v[i];
            i++;
        }
        else{
            b[k]=v[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k]=v[i];
        i++;
        k++;
    }
    while(j<=end){
        b[k]=v[j];
        j++;
        k++;
    }
    int h=start;
    for(int i=0;i<end-start+1;i++){
        v[h]=b[i];
        h++;
    }
}

void MergeSort(vector<int>&v,int start, int end){
    if(start<end){
        int mid=start+(end-start)/2;
        MergeSort(v,start,mid);
        MergeSort(v,mid+1,end);
        MergeTwoArray(v,start,mid,end);
    }

}
void PrintArray(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v{7,1,3,9,5,2,4,8,4,6};
    int n=v.size();
    PrintArray(v);
    MergeSort(v,0,n-1);
    PrintArray(v);
}