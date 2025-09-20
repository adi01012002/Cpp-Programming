#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v={{1,2,3,4},
                          {5,6,7,8},
                          {9,10,11,12},
                          {13,14,15,16},
                          {17,18,19,20}
                        };
    int m=5,n=4;
    int top=0,bottom=m-1,left=0,right=n-1;
    bool first =true;
    while(top<=bottom && left<=right){
        // left->right
        for(int i=left;i<=right;i++){
            if(!first)cout<<" ";
            cout<<v[top][i];
            first=false;
        }
        top++;

        //top->bottom
        for(int i=top;i<=bottom;i++){
            if(!first)cout<<" ";
            cout<<v[i][right];
            first=false;
        }
        right--;

        // right->left

        for(int i=right;i>=left;i--){
            if(!first)cout<<" ";
            cout<<v[bottom][i];
            first=false;
        }
        bottom--;

        //bottom->top
        for(int i=bottom;i>=top;i--){
            if(!first)cout<<" ";
            cout<<v[i][left];
            first=false;
        }

        left++;

    }
}