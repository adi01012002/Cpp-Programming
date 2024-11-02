#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 4, 6, 3, 4, 7};
    int target=10;
    int sum = 0;
    int len = 0;
    int minLen = INT16_MAX;
    int i = 0;
    int j = 0;
    while (j < v.size())
    {
        sum += v[j];
        while (sum >= target)
        {
            len=j-i+1;
            minLen=min(minLen,len);
            sum-=v[i];
            i++;
        }
        j++;
    }
    cout<<minLen;
    cout<<endl;
}