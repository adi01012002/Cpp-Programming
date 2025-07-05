#include <iostream>
#include <map>

using namespace std;

string sortByFrequency(string s) {
    map<char, int> freqMap;

    // Count frequency of each character
    for (char c : s) {
        freqMap[c]++;
    }
    for (auto& p : freqMap) {
        cout<<p.first<<p.second;
    }
    cout<<endl;
    // Use multimap to store frequency -> character (sorted by frequency)
    multimap<int, string ,greater<int>> sortedMap;

    for (auto& p : freqMap) {
        sortedMap.insert({p.second, p.first});
        
    }

    // Construct the result string
    string result;
    for (auto& p : sortedMap) {
        result.append(p.first, p.second);
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