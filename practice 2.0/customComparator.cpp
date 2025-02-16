#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

struct CustomCompare {
    bool operator()(const pair<int, char>& a, const pair<int, char>& b) const {
        if (a.first == b.first) 
            return a.second < b.second;  // Lexicographical order if frequency is same
        return a.first > b.first;        // Sort by descending frequency
    }
};

string sortByFrequency(string s) {
    map<char, int> freqMap;

    // Count frequency of each character
    for (char c : s) {
        freqMap[c]++;
    }

    // Use a set with a custom comparator
    set<pair<int, char>, CustomCompare> sortedSet;

    // Insert frequency-character pairs into the set
    for (auto& p : freqMap) {
        sortedSet.insert({p.second, p.first});
    }

    // Construct the sorted string
    string result;
    for (auto& p : sortedSet) {
        result.append(p.first, p.second); // Append character 'p.first' times
    }

    return result;
}

int main() {
    string s = "eeiaabbabcazzzvvv";
    cout << sortByFrequency(s) << endl;
    return 0;
}
