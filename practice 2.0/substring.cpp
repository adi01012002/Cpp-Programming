#include<iostream>
#include<vector> 
using namespace std; 
vector<vector<int>> dp; 
void generateSubstrings(string &s, int start, int end) {
    if (end == s.length()) return; 
    if (start > end) { 
        generateSubstrings(s, 0, end + 1); 
        return;
    }
    // if(dp[start][end]==1)return; 
    cout << s.substr(start, end - start + 1) <<endl; 
    // dp[start][end]=1; 
    generateSubstrings(s, start + 1, end);
}
void generate(string s){  
   for(int i=1;i<=s.size();i++){ 
     for(int j=0;j<=s.size()-i;j++){
         int end=j+i-1; 
         for(int k=j;k<=end;k++){ 
             cout<<s[k];
         }
         cout<<endl;
     }
   }
}
int main() {
     string s = "abcde"; 
     int n = s.length();
    dp.resize(n, vector<int>(n, 0));
    
    generateSubstrings(s, 0, 0);
    generate(s);
    
    return 0;
}
