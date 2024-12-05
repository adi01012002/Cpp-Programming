#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    // int f =arr[0];
    //  arr.erase(arr.begin());
    // //  arr.push_back(f);
    //  for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    //  }
    //  cout<<endl<<arr.size();

    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 0, 1};
    int n = students.size();
    // int ss =0;
    for (int i = 0; i < n; i++)
    {
        if (students[0] == sandwiches[0])
        {
            //   students.erase(remove(students.begin(), students.end(), 0),
            //   students.end());
            students.erase(students.begin());
            sandwiches.erase(sandwiches.begin());
            cout << students.size() << " ";
            // ss++;
        }
        else
        {
            int front = students[0];
            cout << "f->" << front << " ";
            students.erase(students.begin());
            students.push_back(front);
            cout << students[0] << " ";
        }
    }
    if (students.empty())
    {
        cout << "0";
    }
    else
        cout << students.size();
    // return n-ss;
}