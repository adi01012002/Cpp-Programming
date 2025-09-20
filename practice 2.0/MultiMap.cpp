#include<bits/stdc++.h>
#include <iostream>
using namespace std;

string sortByFrequency(string s) {
    // unordered_map<char, int> freqMap;  // unsorted map
    map<char,int>freqMap;  // sorted on the basis of first

    // Count frequency of each character
    for (char c : s) {
        freqMap[c]++;
    }
    for (auto& p : freqMap) {
        cout<<p.first<<p.second;
    }
    cout<<endl;
    // Use multimap to store frequency -> character (sorted by frequency)
    // multimap<int, string ,greater<int>> sortedMap;
    multimap<int, char ,greater<int>> sortedMap; // duplicate key allowed because it also check and sort on the basis of 
    // map<int, char ,greater<int>> sortedMap; // it only store pair on the basis of key not value i.e only unique key allowed

    for (auto& p : freqMap) {
        sortedMap.insert({p.second, p.first});
        // sortedMap.insert({p.second, string(1,p.first)});
        
    }

    // Construct the result string
    string result;
    for (auto& p : sortedMap) {
        result.append(p.first, p.second);
        // result.append(p.first, p.second[0]);
    }
    cout<<"Multiset"<<endl;
    for (auto& p : sortedMap) {
        cout<<p.first<<p.second;
    }
    cout<<endl;
    return result;
}

int main() {
    string s = "eeiaabbabcazzzvvv";
    cout << sortByFrequency(s) << endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string a="";
//     cout<<a.append(8,'a');
// }