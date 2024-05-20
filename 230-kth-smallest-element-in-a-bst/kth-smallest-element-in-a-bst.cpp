/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode *root,int &n,int &ans,int k)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,n,ans,k);
        n++;
        if(n==k){
            ans=root->val;
            return;
        }
        inorder(root->right,n,ans,k);
    }

    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int>inorde;
        int n=0,ans;
        inorder(root,n,ans,k);
        return ans;
    }
};