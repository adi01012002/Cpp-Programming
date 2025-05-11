#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};




TreeNode* findNearestLeftNode(TreeNode* root, TreeNode* u) {
    if (!root || root == u) return NULL;
    
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        TreeNode* prev = NULL;
        while (size--) {
            TreeNode* curr = q.front(); q.pop();

            if (curr == u) {
                return prev ? prev : NULL;
            }

            prev = curr;

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }

    return NULL;
}

TreeNode* TreeFromLevel(const vector<int>& v) {
    if (v.empty()) return NULL;
    TreeNode* root = new TreeNode(v[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (i < v.size()) {
        TreeNode* curr = q.front(); q.pop();
        if (i < v.size() && v[i] != -1) {
            curr->left = new TreeNode(v[i]);
            q.push(curr->left);
        }
        i++;
        if (i < v.size() && v[i] != -1) {
            curr->right = new TreeNode(v[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
} 

TreeNode* findNode(TreeNode* root, int val) {
    if (!root) return NULL;
    if (root->val == val) return root;
    TreeNode* left = findNode(root->left, val);
    if (left) return left;
    return findNode(root->right, val);
}


int main(){

    int n, val;
    vector<int> levelOrder;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        levelOrder.push_back(val);
    }
    int targetVal;
    cin>>targetVal;


    TreeNode *root = TreeFromLevel(levelOrder);
    TreeNode* target = findNode(root, targetVal);
    if (!target) {
        cout << "Target node not found\n";
        return 0;
    }

    TreeNode* result = findNearestLeftNode(root, target);
    if (result)
        cout << result->val << endl;
    else
        cout << "-1\n";

    

    return 0;
}