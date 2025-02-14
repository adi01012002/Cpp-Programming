#include<bits/stdc++.h>
#include <iostream>
#include <vector>
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
void topview(TreeNode*root){
    unordered_map<int,int>m; // {level,root->val}
    queue<pair<TreeNode*,int>>q; //{root->val,level}
    // pair<TreeNode*int>p;
    // p.first=root;
    // p.second=level;
    // q.push(p);
    q.push({root,0});
    while(q.size()!=0){
        TreeNode*temp=q.front().first;
        int level=q.front().second;
        q.pop();
        if(m.find(level)==m.end()){
            m[level]=temp->val;
        }
        if(temp->left!=NULL){
            q.push({temp->left,level-1});
        }
        if(temp->right!=NULL){
            q.push({temp->right,level+1});
        }

    }
    int minLevel=INT_MAX;
    int maxLevel=INT_MIN;
    for(auto it:m){
        minLevel=min(minLevel,it.first);
        maxLevel=max(maxLevel,it.first);
    }
    // cout<<minLevel<<"=>"<<maxLevel;
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
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
    // display(a);
    topview(a);
}