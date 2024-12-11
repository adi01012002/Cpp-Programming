#include <iostream>
#include <vector>
#include<bits/stdc++.h>
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
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
int level(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(level(root->left), level(root->right));
}
void rightSideView(TreeNode*root,vector<int>&right){
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){

        int k=q.size();
        for(int i=0;i<k;i++){
             TreeNode*temp=q.front();
            q.pop();
            if(i==0) right.push_back(temp->val);
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
        }

    }
}

// void rightSideView(TreeNode *root, vector<int> &right, int currLevel)
// {
//     if (root == NULL)
//         return;
//     right[currLevel] = root->val;
//     rightSideView(root->left, right, currLevel + 1);
//     rightSideView(root->right, right, currLevel + 1);
// }
void leftSideView(TreeNode *root, vector<int> &left, int currLevel)
{
    if (root == NULL)
        return;

    if (left[currLevel] == 0)
        left[currLevel] = root->val;
    leftSideView(root->left, left, currLevel + 1);
    leftSideView(root->right, left, currLevel + 1);
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
    TreeNode *h = new TreeNode(8);
    TreeNode *i = new TreeNode(9);
    TreeNode *j = new TreeNode(10);
    TreeNode *k = new TreeNode(11);
    TreeNode *l = new TreeNode(12);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    d->right = i;
    f->left = j;
    f->right = k;
    g->left = l;
    int n = level(a);
    vector<int> right;
    rightSideView(a, right);
    for (int i = 0; i < n; i++)
    {
        cout << right[i] << " ";
    }
    // cout<<endl;
    //  vector<int> left(n, 0);
    //  leftSideView(a, left, 0);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << left[i] << " ";
    // }
}