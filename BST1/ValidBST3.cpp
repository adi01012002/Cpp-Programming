#include <iostream>
#include <queue>
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
void display(TreeNode *root, int i, bool &flag)
{
    if (root == NULL)
        return;
    display(root->left, i, flag);
    if (i != -1)
    {
        if (root->val > i)
        {
            cout << i << "," << root->val << "|";
            flag = false;
            return;
        }
    }
    i = root->val;

    display(root->right, i, flag);
}
bool validBST(TreeNode *root)
{
    bool flag = true;
    display(root, -1, flag);
    return flag;
}
int main()
{
    TreeNode *a = new TreeNode(10);
    TreeNode *b = new TreeNode(5);
    TreeNode *c = new TreeNode(15);
    TreeNode *d = new TreeNode(2);
    TreeNode *e = new TreeNode(8);
    TreeNode *f = new TreeNode(12);
    TreeNode *g = new TreeNode(20);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // display(a);
    cout << boolalpha;
    cout << validBST(a);
}