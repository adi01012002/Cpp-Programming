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
void leftBoundry(TreeNode *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL) return;
    cout << root->val << " ";
    leftBoundry(root->left);
    if (root->left == NULL)
    leftBoundry(root->right);
}
void bottomBoundry(TreeNode * root){
    if(root==NULL) return;
    bottomBoundry(root->left);
    if(root->left==NULL && root->right==NULL)cout<<root->val<<" ";
    bottomBoundry(root->right);
}
void rightBoundry(TreeNode *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL) return;
    rightBoundry(root->right);
    if (root->right == NULL)rightBoundry(root->left);
    cout << root->val << " ";
    
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
    leftBoundry(a);
    bottomBoundry(a);
    rightBoundry(a->right);
}