#include <iostream>
#include <math.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(Node *root)
{
    if (root == NULL)
        return;
    display(root->left);
    cout << root->val << "  ";
    display(root->right);
}
int sumOfValue(Node *root)
{
    if (root == NULL)
        return 0;
    int leftSum = sumOfValue(root->left);
    int rightSum = sumOfValue(root->right);
    int sum = root->val + leftSum + rightSum;
    return sum;
}
int sizeOfTree(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
int maxVal(Node *root)
{
    if (root == NULL)
        return INT16_MIN;
    int leftMax = maxVal(root->left);
    int rightMax = maxVal(root->right);
    int ans = max(root->val, max(leftMax, rightMax));
    return ans;
}
int levelOfTree(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levelOfTree(root->left), levelOfTree(root->right));
}
int main()
{

    Node *a = new Node(1); // Root node
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(47);
    Node *e = new Node(2);
    Node *f = new Node(6);
    Node *g = new Node(7);
    Node *h = new Node(6);
    Node *i = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->left = h;
    h->left = i;
    display(a);
    cout << endl;
    cout << sumOfValue(a);
    cout << endl;
    cout << sizeOfTree(a);
    cout << endl;
    cout << maxVal(a);
    cout << endl;
    cout << levelOfTree(a);
}
