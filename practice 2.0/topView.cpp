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
        this->right = NULL;
        this->left = NULL;
    }
};
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
}
void topView(TreeNode*root){
    unordered_map<int,int>mp;
    queue<pair<TreeNode*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        TreeNode*temp=q.front().first;
        int level=q.front().second;
        q.pop();
        if(mp.find(level)==mp.end()){
            mp[level]=temp->val;
        }
        if(temp->left!=NULL)q.push({temp->left,level-1});
        if(temp->right!=NULL)q.push({temp->right,level+1});
    }
    // for(auto it :mp){
    //     cout<<it.second<<" "; // wecan print directly print top view if we create ordered_map
    // }                         // it will maintain value from min to max level  
    int minLevel=INT_MAX;
    int maxLevel=INT_MIN;
    for(auto x:mp){
        minLevel=min(minLevel,x.first);
        maxLevel=max(maxLevel,x.first);
    }
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<mp[i]<<" ";
    }

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
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    e->left=g;
    e->right=h;
    // display(a);
    topView(a);
}