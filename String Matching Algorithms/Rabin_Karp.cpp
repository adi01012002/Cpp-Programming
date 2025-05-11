#include<bits/stdc++.h>
using namespace std;

const int d=256;  // Number of character in input alphabet
const int q=101;  // A Prime Number
void rabinKarp(string text,string pattern){
    int n=text.size();
    int m=pattern.size();
    int p=0; // hash value for pattern
    int t=0; // hash value for text
    int h=1;

    // The Value of h would be pow(d,m-1)%q
    for(int i=0;i<m-1;i++){
        h=(h*d)%q;
    } 
    
    // Calculate the hash value of pattern and first window of text;
    for(int i=0;i<m;i++){
        p=(d*p+pattern[i])%q;
        t=(d*t+text[i])%q;
    }

    // Slide the pattern over the text one by one
    for(int i=0;i<=n-m;i++){
        if(p==t){
            // check for chracter one by one
            int j;
            for(j=0;j<m;j++){
                if(text[i+j]!=pattern[j]) break;
            }

            if(j==m){
                cout<<"Pattern forund at "<<i<<endl;
            }
        }
        
        // Calculate the hash value for next Window of text : Removing leading digits add trailing digits
        if(i<n-m){
            t=(d*(t-text[i]*h)+text[i+m])%q;
            // we might get negative value of t ,converting to positive
            if(t<0){
                t=t+q;
            }
        }
    }
}
int main(){
    string text="GEEKS FOR GEEKS";
    string pattern="GEEK";
    rabinKarp(text,pattern);
    return 0;
}