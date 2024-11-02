#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string arr[] = {"0123", "0023", "2901", "456", "00182", "940"};
    vector<int> ar;
    for (int i = 0; i < 6; i++)
    {
        int x = stoi(arr[i]);
        ar.push_back(x);
    }
    // int a=max(ar.begin(),ar.end());
    // cout<<a;
    int max_val = 0;
    for (int i = 0; i < 6; i++)
    {
        if (ar[i] > max_val)
            max_val = ar[i];
    }
    cout << max_val;
}