#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    // TreeNode(int x):val(x),left(NULL),right(NULL) {}
};
TreeNode *helper(vector<int> &v, int start, int end)
{
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    TreeNode *root = new TreeNode(v[mid]);
    root->left = helper(v, start, mid - 1);
    root->right = helper(v, mid + 1, end);
    return root;
}
void traverse(TreeNode *root)
{
    if (root == NULL)
        return;
    traverse(root->left);
    cout << root->val << "->";
    traverse(root->right);
}
// Iterative pre order
// void traverse(TreeNode*root){
//     if(root==NULL) return;
//     stack<TreeNode*>st;
//     st.push(root);
//     while(!st.empty()){
//         TreeNode*temp=st.top();
//         st.pop();
//         cout<<temp->val;
//         if(temp->right!=NULL)st.push(temp->right);
//         if(temp->left!=NULL)st.push(temp->left);
//     }2467->4267
// }
// Iterative In order
// void traverse(TreeNode* root) {
//     if (root == NULL) return;  // If the tree is empty, return

//     stack<TreeNode*> st;  // Stack to simulate the recursion stack
//     TreeNode* current = root;  // Start from the root node

//     while (current != NULL || !st.empty()) {  // Traverse while there are nodes to process
//         // Traverse to the leftmost node
//         while (current != NULL) {
//             st.push(current);  // Push the current node to the stack
//             current = current->left;  // Move to the left child
//         }

//         // Process the top node from the stack
//         current = st.top();
//         st.pop();
//         cout << current->val << " ";  // Print the node value

//         // Move to the right child
//         current = current->right;
//     }
// }
// Iterative post order
// void traverse(TreeNode* root) {
//     if (root == NULL) return;  // If the tree is empty, return

//     stack<TreeNode*> st1, st2;  // Two stacks to simulate the recursion stack
//     st1.push(root);  // Push the root node to the first stack

//     while (!st1.empty()) {
//         TreeNode* current = st1.top();
//         st1.pop();
//         st2.push(current);  // Push the node to the second stack

//         // Push the left and right children of the current node
//         if (current->left != NULL) st1.push(current->left);
//         if (current->right != NULL) st1.push(current->right);
//     }

//     // Pop nodes from the second stack and print the values
//     while (!st2.empty()) {
//         cout << st2.top()->val << " ";
//         st2.pop();
//     }
// }

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = a;
    }
    TreeNode *root = helper(v, 0, n - 1);
    traverse(root);
}