#include<bits/stdc++.h>
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
TreeNode* TreeFromLevel(vector<int>v){
    if(v.empty())return NULL;
    TreeNode*root=new TreeNode(v[0]);
    queue<TreeNode*>q;
    q.push(root);
    int i=1;
    while(i<v.size()){
        TreeNode* curr=q.front();
        q.pop();
        if(i<v.size()&&v[i]!=-1){
            curr->left= new TreeNode(v[i]);
            q.push(curr->left); 
        }
        i++;
        if(i<v.size()&&v[i]!=-1){
            curr->right=new TreeNode(v[i]);
            q.push(curr->right);
        }
        i++;
    }                                                //             1
    return root;                                  //            2       3
}                                            //              4     5  6    7



bool checkChildSumProperty(TreeNode*root){
    if(root==NULL)return true;
    if(root->left==NULL&&root->right==NULL)return true;
    int leftVal=(root->left)?root->left->val:0;
    int rightVal=(root->right)?root->right->val:0;

    if(root->val!=leftVal+rightVal)return false; 

    // if(root->val!=root->left->val+root->right->val)return false;

    return checkChildSumProperty(root->left)&&checkChildSumProperty(root->right);

}
void LevelOrder(TreeNode*root){
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){   // extra for next line
            TreeNode*temp=q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }                           // extra for next 
        cout<<endl;                // extra for next Line
    }
}
void display(TreeNode*root){               
    if(root==NULL)return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);                                   //   10
}                                                         //  8       2  
int main(){                                             //  3   5 - 1   -1
    vector<int>v={10, 8, 2, 3, 5, -1, -1};
    TreeNode*root=TreeFromLevel(v);
    display(root);
    cout<<endl;
    cout<<boolalpha;
    cout<<checkChildSumProperty(root);
    cout<<endl;
    LevelOrder(root);
    cout<<endl;

}


