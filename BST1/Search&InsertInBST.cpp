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
        this->right = NULL;
        this->left = NULL;
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
void InsertIntoBST(TreeNode *root, int value)
{
    // if (root == NULL)
    //     root = new TreeNode(value); //iske bina bhi kaam chal raha tha..
    if (root->val > value)
    {
        if (root->left == NULL)
        {
            TreeNode *temp = new TreeNode(value);
            root->left = temp;
            return;
        }
        else
            InsertIntoBST(root->left, value);
    }
    if (root->val < value)
    {
        if (root->right == NULL)
        {
            root->right = new TreeNode(value);
            return;
        }
        else
            InsertIntoBST(root->right, value);
    }
}
bool SearchBST(TreeNode *root, int value)
{
    if (root == NULL)
        return false;
    if (root->val == value)
        return true;
    if (root->val > value)
        return SearchBST(root->left, value);
    else if (root->val < value)
        return SearchBST(root->right, value);
    return -1;
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
    display(a);
    cout << endl;
    cout << boolalpha;
    cout << SearchBST(a, 8);
    cout << endl;
    InsertIntoBST(a, 7);
    // InsertIntoBST(a, 13);
    // InsertIntoBST(a, 22);
    display(a);
}