#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,vector<string>board,int n){
    // Check upword Column
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q')return false;
    }

    for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
        if(board[i][j]=='Q')return false;
    }

    for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++){
        if(board[i][j]=='Q')return false;
    }
    return true;

}

void solve(int row,int n,vector<string>&board,vector<vector<string>>&sol){
    if(row==n){
        sol.push_back(board);
        return;
    }
    for(int col=0;col<n;col++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(row+1,n,board,sol);
            board[row][col]='.';
        }
    }
} 

void printBoard(vector<vector<string>>&sol){
    int count=0;
    for(auto board:sol){
        cout<<"solution"<<count++<<endl;
        for(auto row:board){
            cout<<row<<endl;
        }
        cout<<endl;
    }
}

int main(){
    int n=4;
    vector<string>board(n,string(n,'.'));
    vector<vector<string>>sol;
    solve(0,n,board,sol);
    printBoard(sol);
}