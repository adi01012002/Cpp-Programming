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
TreeNode*BuildTreeWithPreIn(vector<int>pre,int &preIdx,int st,int end){
    if(st>end)return NULL;
    int value=pre[preIdx++];
    TreeNode*root=new TreeNode(value);
    int idx=InMap[value];
    root->left=BuildTreeWithPreIn(pre,preIdx,st,idx-1);
    root->right=BuildTreeWithPreIn(pre,preIdx,idx+1,end);
    return root;
}

TreeNode*BuildTreeWithpostIn(vector<int>post,int &postIdx,int st,int end){
    if(st>end)return NULL;
    int value=post[postIdx--];
    TreeNode*root=new TreeNode(value);
    int idx=InMap[value];
    root->right=BuildTreeWithpostIn(post,postIdx,idx+1,end);
    root->left=BuildTreeWithpostIn(post,postIdx,st,idx-1);
    return root;
}
void display(TreeNode*root){
    if(root==NULL)return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}
int main(){
    InMap.clear();
    vector<int>In={5,7,2,6,1,4,9};                      
    vector<int>Pre={6,7,5,2,4,1,9};                          //       6
    int n=In.size();                                     //     7           4
    vector<int>post={5, 2, 7, 1, 9, 4, 6};      //               5      2    1      9
    for(int i=0;i<n;i++){
        InMap[In[i]]=i;
    }
    // int preIdx=0;
    int postIdx=post.size()-1;
    // TreeNode*root=BuildTreeWithPreIn(Pre,preIdx,0,In.size()-1);
    TreeNode*root=BuildTreeWithpostIn(post,postIdx,0,In.size()-1);
    display(root);

}