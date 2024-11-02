#include <iostream>
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
void nthLevel(TreeNode *root, int curr, int req)
{
    if (root == NULL)
        return;
    if (curr ==req)
    {
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left, curr + 1, req);
    nthLevel(root->right, curr + 1, req);
}
int levels(TreeNode*root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void levelOrder(TreeNode*root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
    cout<<endl;
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
    // nthLevel(a,1,3);
    levelOrder(a);
}