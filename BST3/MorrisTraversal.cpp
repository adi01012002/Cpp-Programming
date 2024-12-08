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
void morris(TreeNode *root)
{
    TreeNode *curr = root;
    while (curr != NULL)
    {
        if (curr->left != NULL)
        {
            TreeNode *pred = curr->left;
            while (pred->right != NULL && pred->right != curr)
            {
                pred = pred->right;
            }
            if (pred->right == NULL)
            {
                pred->right = curr;
                curr = curr->left;
            }
            else
            {
                pred->left = NULL;
                cout << curr->val << " ";
                curr = curr->right;
            }
        }
        else
        {
            cout << curr->val << " ";
            curr = curr->right;
        }
    }
}
int main()
{
    TreeNode *a = new TreeNode(10);
    TreeNode *b = new TreeNode(5);
    TreeNode *c = new TreeNode(15);
    TreeNode *d = new TreeNode(3);
    TreeNode *e = new TreeNode(8);
    TreeNode *f = new TreeNode(12);
    TreeNode *g = new TreeNode(20);
    TreeNode *h = new TreeNode(6);
    TreeNode *i = new TreeNode(13);
    TreeNode *j = new TreeNode(18);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    e->left = h;
    c->left = f;
    c->right = g;
    f->right = i;
    g->left = j;

    // TreeNode *a = new TreeNode(50);
    // TreeNode *b = new TreeNode(30);
    // TreeNode *c = new TreeNode(70);
    // TreeNode *d = new TreeNode(20);
    // TreeNode *e = new TreeNode(40);
    // TreeNode *f = new TreeNode(60);
    // TreeNode *g = new TreeNode(80);
    // TreeNode *h = new TreeNode(25);
    // a->left = b;
    // a->right = c;
    // b->left = d;
    // b->right = e;
    // c->left = f;
    // c->right = g;
    // d->right = h;
    morris(a);
}


// Description: Developed  a  responsive  and interactive  portfolio  website using  React.js
//  to showcasemy  skills  by  Implementing   dynamic   content  rendering,  smooth navigation 