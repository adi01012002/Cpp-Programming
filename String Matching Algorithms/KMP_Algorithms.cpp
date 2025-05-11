#include<bits/stdc++.h>
using namespace std;
vector<int> generateLps(string pattern){
    int n=pattern.size();
    vector<int>S(n,0);  // Initialize S array with 0s
    int i=1,j=0;
    while(i<n){
        if(pattern[i]==pattern[j]){
            S[i]=j+1;
            i++;
            j++;
        }else{
            if(j!=0){
                j=S[j-1];
            }
            else{
                S[i]=0;
                i++;
            }
        }
    }
    return S;
}
int KMPStringMatch(string text,string pattern){
    int n=text.length();
    int m=pattern.length();
    vector<int>lps=generateLps(pattern);

   // vector<int>result; // for storing all index from which pattern start
    int i=0;  // for text
    int j=0;  // for pattern
    while(i<n){
        if(text[i]==pattern[j]){
            i++;
            j++;
        }
        if(j==m){
            return i-j;    // for only first occrence
            
            // finding all occurence of pattern
          //  result.push_back(i - j);  // Store match starting index
           // j = lps[j - 1]; // Important! Reset j to continue finding more matches
        }
        else if(i<n&& pattern[j]!=text[i]){
            if(j!=0){
                j=lps[j-1];
            }else {
                i++;
            }
        }
    }
    return -1;

    //return result // for all occurence 
}
int main(){
    string text="ababcababdbdd";
    string pattern="ababd";
    int index=KMPStringMatch(text,pattern);
    if(index!=-1){
        cout<<"Pattern Found at "<<index<<endl;
    }
    else{
        cout<<"Pattern not Found"<<endl;
    }
}