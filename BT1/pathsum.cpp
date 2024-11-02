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
void helper(TreeNode *root, int targetSum, int sum, bool &flag)
{
    if (root == NULL)
        return;
    cout << sum << "." << root->val << ",";
    if (root->left == NULL && root->right == NULL)
    {   
        sum += root->val;
        cout<<"("<<sum<<")";
        if (sum == targetSum)
        {
            flag = true;
            return;
        }
    }
    helper(root->left, targetSum, sum + root->val, flag);
    helper(root->right, targetSum, sum + root->val, flag);
}
bool Pathsum(TreeNode *root, int targetSum)
{
    bool flag = false;
    int sum = 0;
    helper(root, targetSum, sum, flag);
    return flag;
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
    // TreeNode *h = new TreeNode(8);
    // TreeNode *i = new TreeNode(9);
    // TreeNode *j = new TreeNode(10);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // d->left = h;
    // e->left = i;
    // g->left = j;
    // display(a);
    int targetSum = 7;
    cout << boolalpha;
    cout << Pathsum(a, targetSum);
}