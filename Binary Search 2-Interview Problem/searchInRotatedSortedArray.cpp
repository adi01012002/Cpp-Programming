#include <bits/stdc++.h>
using namespace std;
int SearchInRotatedArray(vector<int> &v, int lo, int hi, int target)
{
    bool flag = false;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] == target)
        {
            return mid;
            flag = true;
            break;
        }
        else if (v[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    if (flag == false)
        return -1;
}
int main()
{
    vector<int> v = {1};
    int target = 0;
    if (nums.size() == 2)
    {
        if (target == nums[0])
            return 0;
        else if (target == nums[1])
            return 1;
        else
            return -1;
    }
    int n = v.size();
    int lo = 0;
    int hi = n - 1;
    int idx = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (mid == 0)
            lo = mid + 1;
        else if (mid == n - 1)
            hi = mid - 1;
        if (v[mid] < v[mid - 1] && v[mid] < v[mid + 1])
        {
            idx = mid; // smalles element
            break;
        }
        else if (v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
        {
            idx = mid + 1;
            break;
        }
        else if (v[mid] > v[hi])
            lo = mid + 1;
        else
            hi = mid - 1; // v[mid]<v[hi]
    }
    // cout << idx << " is Pivote Element";
    if(idx==-1) return SearchInRotatedArray(nums,0,n-1,target);
    else if (target >= v[0] && target <= v[idx - 1])
    {
        cout << SearchInRotatedArray(v, 0, idx - 1, target);
    }
    else
    {
        cout << SearchInRotatedArray(v, idx, v.size() - 1, target);
    }
}