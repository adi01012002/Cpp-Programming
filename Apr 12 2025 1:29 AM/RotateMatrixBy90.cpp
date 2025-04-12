#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v={{1,2,3}, {4,5,6}, {7,8,9}};
    int r=v.size();
    int c=v[0].size();
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c/2;j++){
            swap(v[i][j],v[i][c-j-1]);
        }
    }
    cout<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}