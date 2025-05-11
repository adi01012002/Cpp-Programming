#include<bits/stdc++.h>
using namespace std;

// Time Complexity O(n^2) , Space Complexity O(1); 

void bubbleSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
           // cout<<"hi ";
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}

// Time Complexity O(n) for best case , Space Complexity O(1); 

void bubbleSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool flag=0;
        //cout<<"hi ";
        for(int j=0;j<n-1;j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)break;
    }
}


void printArray(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    printArray(v);
    bubbleSort(v);
    printArray(v);
}