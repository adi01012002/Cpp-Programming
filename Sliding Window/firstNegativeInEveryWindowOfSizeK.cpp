#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2, -3, 4, 4, -7, -1, 4, -2, 6};
    int n=v.size();
    int k = 4;
    int idx = -1;
    for (int i = 0; i < k; i++)
    {
        if (v[i] < 0)
        {
            idx = i;
            break;
        }
    }
    // cout << idx << " " << v[idx];
    vector<int> ans(n - k + 1); // for every case
    if (idx == -1)
        ans[0] = 1;
    else
        ans[0] = v[idx];
    int i = 1;
    int j = k;
    while (j < n)
    {
        if (idx >= i)
            ans[i] = v[idx];
        else{  
             idx=-1;
            for (int x = i; x <=j; x++)
            {
                if (v[x] < 0){
                    idx=x;
                    break;
                }
            }
            if(idx!=-1)ans[i] = v[idx];
            else ans[i]=1;
        }
        i++;
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}