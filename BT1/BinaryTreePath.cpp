#include <iostream>
#include <vector>
#include <string>
using namespace std;
class TreeNode
{
public:
    TreeNode *left;
    TreeNode *right;
    int val;
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
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}
void traverse(TreeNode *root, vector<string> &s, string st)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        s.push_back(st + to_string(root->val)+",");
        return;
    }
    traverse(root->left, s, st + to_string(root->val)+"->");
    traverse(root->right, s, st + to_string(root->val)+"->");
}
void binaryTreePath(TreeNode *root, vector<string> &s)
{
    if (root == NULL)
        return;
    string st = "";
    traverse(root, s, st);
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

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    e->left = i;
    g->left = j;
    // display(a);
    vector<string> s;
    binaryTreePath(a, s);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}