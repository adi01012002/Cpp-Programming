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
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
// void levelOrder(TreeNode *root)
// {
//     queue<TreeNode *> q;
//     q.push(root);
//     while (q.size() != 0)
//     {
//         TreeNode *temp = q.front();
//         cout << temp->val << " ";
//         q.pop();
//         if (temp->left != NULL)
//             q.push(temp->left);
//         if (temp->right != NULL)
//             q.push(temp->right);
//     }
//     cout << endl;
// }

void levelOrderQueue(TreeNode*root){
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
       auto f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left!=NULL)q.push(f->left);
        if(f->right!=NULL)q.push(f->right);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
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

    // levelOrder(a);
    levelOrderQueue(a);
}