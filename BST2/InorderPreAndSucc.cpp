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
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}
void InorderPre(TreeNode *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL)
        return;
    // {
    // root->left->val;
    TreeNode *pred = root->left;
    while (pred->right != NULL)
    {
        // cout << pred->val;
        pred = pred->right;
    }
    cout << pred->val;
    // }
    // else
    //     return;
}
void InorderSucc(TreeNode *root,TreeNode *target)
{
    if (target == NULL)
        return;
    if (target->right != NULL)
    {
        // taget->left->val;
        TreeNode *succ = target->right;
        // cout<<succ->val;
        while (succ->left != NULL)
        {
            // cout << pred->val;
            succ = succ->left;
        }
        cout << succ->val;
    }
    TreeNode* successor = NULL; 
    while (root != NULL)
    {
        if (target->val > root->val)
        {
            root = root->right;
        }
        else if (target->val < root->val)
        {
            successor = root; // Update successor
            // cout<<successor->val;
            root = root->left;
        }
        else
        {
            break;
        }
    }
    cout<<successor->val;
}
int main()
{
    TreeNode *a = new TreeNode(50);
    TreeNode *b = new TreeNode(30);
    TreeNode *c = new TreeNode(70);
    TreeNode *d = new TreeNode(20);
    TreeNode *e = new TreeNode(40);
    TreeNode *f = new TreeNode(60);
    TreeNode *g = new TreeNode(80);
    TreeNode *h = new TreeNode(25);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->right = h;
    // display(a);
    cout << endl;
    // InorderPre(c);
    InorderSucc(a,e);
}

// #include <iostream>
// using namespace std;

// class TreeNode {
// public:
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int val) {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// // Utility function to display the BST in-order
// void display(TreeNode *root) {
//     if (root == NULL)
//         return;
//     display(root->left);
//     cout << root->val << " ";
//     display(root->right);
// }

// // Function to find the inorder predecessor of a node in BST
// TreeNode* InorderPre(TreeNode *root, TreeNode *target) {
//     TreeNode *predecessor = NULL;

//     // Case 1: If the target node has a left subtree
//     if (target->left != NULL) {
//         TreeNode *pred = target->left;
//         while (pred->right != NULL) {
//             pred = pred->right;
//         }
//         return pred;
//     }

//     // Case 2: No left subtree, find the nearest ancestor for which target is in its right subtree
//     while (root != NULL) {
//         if (target->val > root->val) {
//             predecessor = root; // Update predecessor
//             root = root->right;
//         } else if (target->val < root->val) {
//             root = root->left;
//         } else {
//             break;
//         }
//     }
//     return predecessor;
// }

// // Function to find a node in the BST by its value
// TreeNode* findNode(TreeNode *root, int value) {
//     while (root != NULL) {
//         if (value < root->val) {
//             root = root->left;
//         } else if (value > root->val) {
//             root = root->right;
//         } else {
//             return root;
//         }
//     }
//     return NULL;
// }

// int main() {
//     // Create the BST
//     TreeNode *a = new TreeNode(50);
//     TreeNode *b = new TreeNode(30);
//     TreeNode *c = new TreeNode(70);
//     TreeNode *d = new TreeNode(20);
//     TreeNode *e = new TreeNode(40);
//     TreeNode *f = new TreeNode(60);
//     TreeNode *g = new TreeNode(80);
//     TreeNode *h = new TreeNode(25);
//     a->left = b;
//     a->right = c;
//     b->left = d;
//     b->right = e;
//     c->left = f;
//     c->right = g;
//     d->right = h;

//     cout << "In-order Traversal of BST: ";
//     display(a);
//     cout << endl;

//     // Find and display the inorder predecessor
//     int targetValue = 60; // Change this to test for different nodes
//     TreeNode *target = findNode(a, targetValue);
//     if (target != NULL) {
//         TreeNode *predecessor = InorderPre(a, target);
//         if (predecessor != NULL) {
//             cout << "Inorder predecessor of " << targetValue << " is: " << predecessor->val << endl;
//         } else {
//             cout << targetValue << " has no inorder predecessor in the BST." << endl;
//         }
//     } else {
//         cout << "Node with value " << targetValue << " not found in the BST." << endl;
//     }

//     return 0;
// }
