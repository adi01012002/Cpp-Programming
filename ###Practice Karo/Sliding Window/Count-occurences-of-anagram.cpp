#include<bits/stdc++.h>
using namespace std;
int main(){
    string txt="forftfor";
    string pat="for";
    int k=pat.size();
    int n=txt.size();
    int i=0;
    int j=0;
    map<char,int>mp;
    for(auto it:pat){
        mp[it]++;
    }
    int count=mp.size(); // number of unique character , pattern may have duplicate element
    int result=0;
    while(j<n){
        if(mp.find(txt[j])!=mp.end()){
            mp[txt[j]]--;
            if(mp[txt[j]]==0)count--;  // here one unique character we get
        }
        if(j-i+1>k){                      // window size exceed
            if(mp.find(txt[i])!=mp.end()){  // agar txt[i] map me hai iska matlab ye hai ki vo hamare pattern me bhi hai 
                mp[txt[i]]++;      // humne peheli baar mila hoga to decrease kiya tha to ab restore karenge
            }
            if(mp[txt[i]]==1)count++;  // jab hum paheli baar is par aye honge (txt[i]) to humne tab count to decrease kiya ab jab hum age bad rahe hai to count to restore karna hoga 
            i++;
        }
        if(j-i+1==k){
            if(count==0)result++;
        }
        j++;
    }
    cout<<result<<endl;
}