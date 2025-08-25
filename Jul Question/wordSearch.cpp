#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<char>>&board,int i,int j,string word,int idx){
    if(idx==word.length())return true; // reach match
    if(i<0||j<0||i>=board.size()||j>=board[0].size()||board[i][j]!=word[idx])return false;

    char temp=board[i][j];
    board[i][j]='#';
    bool found= dfs(board,i+1,j,word,idx+1)||
                dfs(board,i-1,j,word,idx+1)||
                dfs(board,i,j+1,word,idx+1)||
                dfs(board,i,j-1,word,idx+1);
    board[i][j]=temp;
    return found;

}
bool exist(vector<vector<char>>&board,string word){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(dfs(board,i,j,word,0))return true;
        }
    }
    return false;

}
int main(){
    vector<vector<char>>board={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word="ABCCED";
    cout<<boolalpha<<exist(board,word);

}