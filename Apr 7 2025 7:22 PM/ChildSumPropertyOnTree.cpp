#include<bits/stdc++.h>
using namespace std;
// bool ChildSumProperty(vector<int>v){
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         int lidx=(2*i)+1;
//         int ridx=(2*i)+2;
//         int lval=(lidx<n)?v[lidx]:0;
//         int rval=(ridx<n)?v[ridx]:0;
//         if(lidx<n&&ridx<n){
//             if(v[i]!=lval+rval){
//                 return false;
//             }
//         }
//     }
//     return true; 
// }
bool ChildSumProperty(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        int lidx = (2 * i) + 1;
        int ridx = (2 * i) + 2;
        
        // Ignore leaf nodes (Nodes with no children)
        if (lidx >= n && ridx >= n) {
            continue; // Skip leaf nodes
        }

        // Get left and right child values, treating -1 as NULL (0)
        int lval = (lidx < n && v[lidx] != -1) ? v[lidx] : 0;
        int rval = (ridx < n && v[ridx] != -1) ? v[ridx] : 0;

        // Check if parent value equals sum of children
        if (v[i] != lval + rval) {
            return false;
        }
    }
    return true;
}

int main(){
    vector<int>v={10, 8, 2, 3, 5, -1, -1};
    cout<<boolalpha;
    cout<<ChildSumProperty(v);

}


                             //                   1
                                //            2       3
                        //                  4     5  6    7
    
    