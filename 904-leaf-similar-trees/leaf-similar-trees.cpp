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

    vector<int> leafarr(TreeNode *root)
    {
        stack<TreeNode*> s;
        vector<int>res;
        TreeNode *curr=root;
        while(curr!=NULL || s.empty()==false)
        {
            while(curr!=NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            if(curr->left==NULL && curr->right==NULL)
            {
                res.push_back(curr->val);
            }
            s.pop();
            curr=curr->right;
        }
        return res;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int>res1=leafarr(root1),res2=leafarr(root2);
        return res1==res2;
    }
};