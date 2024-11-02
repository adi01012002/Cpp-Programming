#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int n=v.size();
    int k = 3;
    int i = 0;
    int j = 0;
    int flip = 0;
    int len = INT16_MIN, maxLen = INT16_MIN;
    while (j < n)
    {
        if (v[j] == 1)
            j++;
        else
        {
            if (flip < k)
            {
                flip++;
                j++;
            }
            else
            {
                len = j - i;
                maxLen = max(maxLen, len);
                while (v[i] != 0)
                    i++;
                i++;
                j++;
            }
        }
    }
    len = j - i;
    maxLen = max(maxLen, len);
    cout<<maxLen;
}