#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;
    // don't forget to return 0 at the end of main()
    return 0;
}
