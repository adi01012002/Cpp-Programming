#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int val){
        this->left=NULL;
        this->right=NULL;
        this->val=val;
    }
};
TreeNode*helper(vector<int>v,int st,int end){    // here we are using a algo that similar to binary search 
    if(st>end)return NULL;    // this is same as the condition in side the while loop
    int mid=st+(end-st)/2;   // findng the mid idx
    TreeNode*root=new TreeNode(v[mid]);    // Create new Node
    root->left=helper(v,st,mid-1);   // Searching on left side 
    root->right=helper(v,mid+1,end); // searching on right side
    return root;   // return ans;
}
TreeNode* sortedArrayToBST(vector<int>v){
    return helper(v,0,v.size()-1);
}
void display(TreeNode*root){
    if(root==NULL)return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}

int main(){
    vector<int>v={-10,-3,0,5,9};
    TreeNode*a= sortedArrayToBST(v);
    display(a);   

}