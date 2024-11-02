#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for (auto ele : s)
    {
        cout << ele << " ";
    }
    cout<<endl<<s.size();
    cout<<endl;
    int target=48;
    if(s.find(target)!=s.end()){
        cout<<"exist";
    }
    else cout<<"not exist";asz
}
