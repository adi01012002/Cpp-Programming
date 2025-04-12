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
TreeNode*BuildTree(vector<int>post,int& PIdx,int st,int end){
    if(st>end)return NULL;
    int value=post[PIdx--];
    TreeNode*root=new TreeNode(value);
    int idx=InMap[value];
    root->right=BuildTree(post,PIdx,idx+1,end);
    root->left=BuildTree(post,PIdx,st,idx-1);
    return root;
}
void display(TreeNode*root){
    if(root==NULL)return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}
int main(){
    vector<int>post={4,5,2,6,7,3,1};
    vector<int>In={4, 2, 5, 1, 6, 3, 7};
    InMap.clear();
    for(int i=0;i<In.size();i++){
        InMap[In[i]]=i;
    }
    int PostIdx=post.size()-1;
    TreeNode*root=BuildTree(post,PostIdx,0,In.size()-1);
    display(root);

}