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

    void inorder(vector<int> &in,TreeNode *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(in,root->left);
        in.push_back(root->val);
        inorder(in,root->right);
    }

    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int>inorde;
        inorder(inorde,root);
        for(int i=0;i<inorde.size();i++)
        {
            cout<<inorde[i]<<" ";
        }   
        return inorde[--k];
    }
};