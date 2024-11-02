#include <iostream>
#include <string>
using namespace std;
int main(){
    // string s="abcdiiiefgijvouvxze";
    int count=0;
//     for(int i=0;s[i]!='\0';i++){ //i<=s.lenght()==s[i]!='\0'
//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') count++;
//     }
//     cout<<count;
  

  int n;
  cin>>n;
  char str[n];
  for(int i=0;i<n;i++){
    cin>>str[i];
  }

//    for(int i=0;i<n;i++){
//     cout<<str[i];
//   }

for(int i=0;str[i]!='\0';i++){ //i<=str.lenght()==str[i]!='\0'
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') count++;
    }
    cout<<count;

// cout<<str[0];
}