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
        this->left = NULL;
        this->right;
    }
};
TreeNode *helper(vector<int> &v, int lo, int hi)
{
    if (lo > hi)
        return NULL;
    int mi = lo + (hi - lo) / 2;
    TreeNode *root = new TreeNode(v[mi]);
    root->left = helper(v, lo, mi - 1);
    root->right = helper(v, mi + 1, hi);
    return root;
}
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}
void levelOrderTraversal(TreeNode *root)
{
    if (root == NULL)
        return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++){
            TreeNode *temp = q.front();
            q.pop();
            cout << temp->val << " ";
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
        cout << endl;
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = v.size();
    TreeNode *root = helper(v, 0, n - 1);
    // display(root);
    levelOrderTraversal(root);
}