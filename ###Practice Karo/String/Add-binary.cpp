#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "1010", b = "1011";
    int i = a.length() - 1;
    int j = b.length() - 1;
    string ans;
    int carr=0;

    while (i >= 0 || j >= 0) {
        int x = i >= 0 ? a[i] - '0' : 0;  // Characters like '0' and '1' in string a are stored as ASCII codes ('0' = 48, '1' = 49).
        int y = j >= 0 ? b[j] - '0' : 0;  //Subtracting '0' converts them to their actual integer value.
        // '0' - '0' = 0 and '1' - '0' = 1                                    
        int sum=x+y+carr;      //  👉 So this extracts the numeric bit from the string.
        if(sum%2){
            ans+='1';
        }
        else{
            ans+='0';
        } 
        if (sum > 1) carr = 1;
        else carr = 0;   
        // This is one other Methode
        // ans += (sum % 2) + '0';  // add '0' or '1'
        // carr = sum / 2;          // update carry
                                   
        i--,j--;                              
    }
    if(carr>0)ans+='1';
    reverse(ans.begin(),ans.end());
    cout<<ans;
}