#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(TreeNode *root){
    if (root == NULL)return;
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}
void levelOrderTraversal(TreeNode*root){
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode*temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
}
int MaxofTree(TreeNode*root){
    if(root==NULL)return INT_MIN;
    return max(root->val,max(MaxofTree(root->left),MaxofTree(root->right)));
}
int NumberOfNodes(TreeNode*root){
    if(root==NULL) return 0;
    return 1+NumberOfNodes(root->left)+NumberOfNodes(root->right);
}
int sumOfNodeValues(TreeNode*root){
    if(root==NULL)return 0;
    return root->val+sumOfNodeValues(root->left)+sumOfNodeValues(root->right);
}
int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);
    TreeNode *h = new TreeNode(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left=h;
    // display(a);
    // levelOrderTraversal(a);
    // cout<<MaxofTree(a);
    // cout<< NumberOfNodes(a);
    // cout<<sumOfNodeValues(a);
}