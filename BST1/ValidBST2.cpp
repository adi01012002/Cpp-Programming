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
void display(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;
    display(root->left, v);
    v.push_back(root->val);
    display(root->right, v);
}
bool validBST(TreeNode *root)
{
    vector<int> v;
    bool flag = true;
    display(root, v);
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
        {
            flag = false;
            break;
        }
    }
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
