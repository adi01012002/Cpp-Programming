#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(v[i],v[min]);
        }
    }
}
void PrintArray(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v={5,7,1,3,9,2};
    PrintArray(v);
    SelectionSort(v);
    PrintArray(v);
    
}