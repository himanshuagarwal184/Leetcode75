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

    void countforNodes(TreeNode *root,int &count,int maxx)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val >= maxx)
        {
            count++;
            maxx=root->val;
        }
        countforNodes(root->left,count,maxx);
        countforNodes(root->right,count,maxx);
    }
    int goodNodes(TreeNode* root) 
    {
        int c=0;
        if(!root)
            return c;
        countforNodes(root,c,root->val);
        return c;
    }
};