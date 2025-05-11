#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int temp=v[i];
        int j=i-1;
        while(j>=0&&v[j]>temp){
            v[j+1]=v[j];
            // swap(v[j+1],v[j]);   we can make this instead of shift but the we got more number og operations 
            j=j-1; 
        }
        v[j+1]=temp;
    }
}
void PrintArray(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){  
    vector<int>v={2,5,2,1,4};
    PrintArray(v);
    InsertionSort(v);
    PrintArray(v);

}


    // 0 1 2 3
    // 5 2 1 4  x=2;  j=1-1=0  in[0]=5   if in[j]>x => in[0+1]=in[0] and j=j-1  and now j become 0 -> -1 after while loop in[-1+1]=x means 2 for this 
    // 2 5 1 4   x=1   j=2-1=1  in[1]=5   if in[j]>x => in[1+1]=in[1] and j=j-1  and now j become 1 ->  0 afetr while loop in[0+1] =x means 1 for this 
    // 2 5 5 4 
    // 2 2 5 4   j= -1  now loop beeak and set in[j] => in[0]=1;
    // 1 2 5 4 