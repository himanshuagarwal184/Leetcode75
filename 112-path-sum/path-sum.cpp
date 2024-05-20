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


    bool flag = false;
    void dfs(TreeNode *root, int sum, int targetSum)
    {
        if(root==NULL)
        {
            return;
        }
        sum += root->val;
        if(sum==targetSum && !root->left && !root->right)
        {
            flag=true;
            return;
        }
        dfs(root->left,sum,targetSum);
        dfs(root->right,sum,targetSum);
    }


    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        int sum = 0;
        dfs(root,sum,targetSum);
        return flag;
    }
};