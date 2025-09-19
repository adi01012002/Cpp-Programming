#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void display(TreeNode*root){
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode*temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

TreeNode*BuildBST(vector<int>v,int st,int end){
    if(st>end)return NULL;
    int mid=st+(end-st)/2;
    TreeNode*root=new TreeNode(v[mid]);
    root->left=BuildBST(v,st,mid-1);
    root->right=BuildBST(v,mid+1,end);
    return root;
}
int main(){
    vector<int>v={1,2,3,4,5,6,7};
    TreeNode*root=BuildBST(v,0,v.size()-1);
    display(root);
}