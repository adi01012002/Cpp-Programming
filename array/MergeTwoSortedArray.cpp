#include <iostream>
#include <vector>
using namespace std;
void MergeTwoArray(vector<int> v1, vector<int> v2, vector<int> &ans)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            ans[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            ans[k] = v2[j];
            j++;
            k++;
        }
    }
    if (i==v1.size())
    {
        while (j < v2.size())
        {
            ans[k] = v2[j];
            j++;
            k++;
        }
    }
    if (j==v2.size())
    {
        while (i < v1.size())
        {
            ans[k] = v1[i];
            i++;
            k++;
        }
    }
}
int main()
{
    vector<int> v1 = {2, 4, 5, 8, 9, 12, 15};
    vector<int> v2 = {1, 2, 3, 6, 11, 13, 17,18,20,23,34,39,43,53};
    int Tsize=v1.size()+v2.size();
    vector<int> ans(Tsize);
    MergeTwoArray(v1, v2, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

