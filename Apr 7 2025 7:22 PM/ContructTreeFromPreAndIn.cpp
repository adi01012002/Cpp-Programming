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
unordered_map<int,int>InMap;
TreeNode*BuildTree(vector<int>pre,int& preIdx,int st,int end){
    if(st>end)return NULL;
    int value=pre[preIdx++];
    // cout<<value<<" ";
    TreeNode*root=new TreeNode(value);
    int idx=InMap[value];
    root->left=BuildTree(pre,preIdx,st,idx-1);
    root->right=BuildTree(pre,preIdx,idx+1,end);
    return root;
}
void display(TreeNode*root){
    if(root==NULL)return;
    display(root->left);
    display(root->right);
    cout<<root->val<<" ";
}
int main(){
    vector<int>pre={1, 2, 4, 5, 3, 6, 7};
    vector<int>In={4, 2, 5, 1, 6, 3, 7};
    InMap.clear();
    for(int i=0;i<In.size();i++){
        InMap[In[i]]=i;
    }
    int preIdx=0;

    TreeNode*root= BuildTree(pre,preIdx,0,In.size()-1);
    display(root);
}