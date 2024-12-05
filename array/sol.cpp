#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <string>
using namespace std;

struct Transition {
    char present_state;
    char next_state;
    char input;
    char output;
};

pair<string, string> detectSequence(const vector<Transition>& transitions) {
    string sequence = "";
    bool isNonOverlapping = false;
    char initialState = transitions[0].present_state;
    
    for (const auto& t : transitions) {
        sequence += t.input;
        if (t.output == '1' && t.next_state == initialState) {
            isNonOverlapping = true;
        }
    }

    string detectorType = isNonOverlapping ? "Non Overlapping Sequence Detector" : "Overlapping Sequence Detector";
    return {sequence, detectorType};
}

int main() {
    vector<Transition> transitions;
    string line;
    
    while (getline(cin, line) && !line.empty()) {
        Transition t;
        sscanf(line.c_str(), "%c %c %c %c", &t.present_state, &t.next_state, &t.input, &t.output);
        transitions.push_back(t);
    }
    
    auto result = detectSequence(transitions);
    cout << result.first << endl;
    cout << result.second << endl;
    
    return 0;
}
