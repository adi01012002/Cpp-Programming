#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int minCostToVowels(string s) {
    vector<char> vowels = {'a','e','i','o','u'};
    int minCost = INT_MAX;

    // Try converting entire string to each vowel target
    for(char target : vowels) {
        int cost = 0;
        for(char c : s) {
            if(isVowel(c)) {
                // vowel → vowel cost
                int posX = find(vowels.begin(), vowels.end(), c) - vowels.begin();
                int posY = find(vowels.begin(), vowels.end(), target) - vowels.begin();
                cost += abs(posX - posY);
            } else {
                // consonant → vowel cost = 10
                cost += 10;
            }
        }
        minCost = min(minCost, cost);
    }
    return minCost;
}

int main() {
    string s = "abcioue";
    cout << minCostToVowels(s) << endl; // Output: 20
    return 0;
}
