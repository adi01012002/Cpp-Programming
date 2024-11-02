#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {6,3,5,2};
    int p = 9;
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    int r = sum % p;
    cout<<r<<endl;
    int i = 0;
    int j = 0;
    int len = -1;
    int minLen = INT16_MAX;
    int sum1 = 0;
    while (j < n)
    {
        sum1 += v[j];
        // cout<<sum<<"->";
        if (sum1 < r)j++;
        else if (sum1 == r)
        {
            len = j - i + 1;
            minLen = min(minLen, len);
            sum1 -= v[i];
            i++;
            j = i;
        }
        else
        {
            sum1 = sum1-v[i];
            cout<<sum1;
            i++;
            j = i;
        }
      
    }
   
}