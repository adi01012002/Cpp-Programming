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

TreeNode* TreeFromLevel(vector<int>&v){
    if(v.empty())return NULL;
    TreeNode* root=new TreeNode(v[0]);
    queue<TreeNode*>q;
    q.push(root);
    int i=1;
    while (i<v.size())
    {
        TreeNode*curr=q.front();
        q.pop();
        if(i<v.size()&& v[i]!=-1){
            curr->left=new TreeNode(v[i]);
            q.push(curr->left);
        }
        i++;
        if(i<v.size()&& v[i]!=-1){
            curr->right=new TreeNode(v[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

void LevelOrderTraversal(TreeNode*root){
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode*curr=q.front();
            q.pop();
            cout<<curr->val<<" ";
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
        cout<<endl;
    }
}


int main(){
    vector<int>v={10, 8, 2, 3, 5, -1, -1};
    TreeNode*root=TreeFromLevel(v);
    LevelOrderTraversal(root);


}