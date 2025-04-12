#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};

class BinaryTree{
public:
    TreeNode*root;
    int NodeCount;
    BinaryTree(){
        root=NULL;
        NodeCount=0;
    }
    void PreOrder(TreeNode*root){
        if(root==NULL)return;
        cout<<root->val<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    void PostOreder(TreeNode*root){
        if(root==NULL)return;
        PostOreder(root->left);
        PostOreder(root->right);
        cout<<root->val<<" ";
    }
    void InOrder(TreeNode*root){
        if(root==NULL)return;
        InOrder(root->left);
        cout<<root->val<<" ";
        InOrder(root->right);
    }
    void levelOrder(TreeNode*root,int k){
        queue<TreeNode*>q;
        q.push(root);
        int n=1;
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(n==k){
                    cout<<temp->val<<" ";
                }
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
            }
            n++;
            // cout<<endl;
        }
    }
    int SumOfTree(TreeNode*root){
        if(root==NULL)return 0;
        return root->val+SumOfTree(root->left)+SumOfTree(root->right);
    }
    int LevelOfTree(TreeNode*root){
        if(root==NULL)return 0;
        return 1+max(LevelOfTree(root->left),LevelOfTree(root->right));
    }
    int NumOfNode(TreeNode*root){
        if(root==NULL)return 0;
        return 1+NumOfNode(root->left)+NumOfNode(root->right);
    }
    int MaxOfTree(TreeNode*root){
        if(root==NULL)return INT_MIN;
        return max({root->val, MaxOfTree(root->left),MaxOfTree(root->right)});
    }
    int MinOfTree(TreeNode*root){
        if(root==NULL)return INT_MAX;
        return min({root->val, MinOfTree(root->left),MinOfTree(root->right)});
    }
};
int main(){

    TreeNode *a = new TreeNode(-1); // Root TreeNode
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(29);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);
    TreeNode *h = new TreeNode(8);
    TreeNode *i = new TreeNode(9);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->left = h;
    g->right = i;
    BinaryTree B;
    B.levelOrder(a,3);
    cout<<endl;
    cout<<"PreOrder Traversal :";
    B.PreOrder(a);
    cout<<endl;
    cout<<"PostOrder Traversal :";
    B.PostOreder(a);
    cout<<endl;
    cout<<"Inorder Traversal :";
    B.InOrder(a);
    cout<<endl;
    cout<<"Sum Of The TreeNode Value :";
    cout<<B.SumOfTree(a);
    cout<<endl;
    cout<<"Level Of Tree :";
    cout<<B.LevelOfTree(a);
    cout<<endl;
    cout<<"Number Of Node :";
    cout<<B.NumOfNode(a);
    cout<<endl;
    cout<<"Max Value Of Tree :";
    cout<<B.MaxOfTree(a);
    cout<<endl;
    cout<<"Min Value Of Tree :";
    cout<<B.MinOfTree(a);
    cout<<endl;


}