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
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}
int maxVal(TreeNode *root)
{
    if (root == NULL)
        return INT16_MIN;
    return max(root->val, max(maxVal(root->left), maxVal(root->right)));
}
int minVal(TreeNode *root)
{
    if (root == NULL)
        return INT16_MAX;
    return min(root->val, min(minVal(root->left), minVal(root->right)));
}
bool validBST(TreeNode *root)
{
    if (root == NULL)
        return true;
    else if (root->val <= maxVal(root->left))
        return false;
    else if (root->val >= minVal(root->right))
        return false;
    return validBST(root->left);
    return validBST(root->right);
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
    cout << boolalpha;
    cout << validBST(a);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////    LEETCODE SOLUTION
// long long maxVal(TreeNode *root)
// {
//     if (root == NULL)
//         return INT64_MIN
//     return max((long long)(root->val), max(maxVal(root->left), maxVal(root->right)));
// }
// long long minVal(TreeNode *root)
// {
//     if (root == NULL)
//         return INT64_MAX;
//     return min((long long)(root->val), min(minVal(root->left), minVal(root->right)));
// }
// bool validBST(TreeNode *root)
// {
//     if (root == NULL)
//         return true;
//     else if ((long long)(root->val) <= maxVal(root->left))
//         return false;
//     else if ((long long)(root->val) >= minVal(root->right))
//         return false;
//     return validBST(root->left) && validBST(root->right);
// }