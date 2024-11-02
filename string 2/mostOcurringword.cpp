#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <sstream>
int main()
{
    string str = "ragav is a math teacher. He is a DSA mentor as well!";
    stringstream ss(str);
    string temp;
    vector<string> v;

    while (ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int n = v.size();
    cout << n << endl;
    int count = 1;
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
            count++;
        else
        {
            cout << count << "->" << v[i] << endl;
            count = 1;
        }
        max_count = max(count, max_count);
    }

    count = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
            count++;
        else
        {
            // cout<<count<<"->"<<v[i]<<endl;
            // max_count = max(count,max_count);
            count = 1;
        }
        if (count == max_count)
            cout << v[i] << " " << max_count << endl;
    }
}