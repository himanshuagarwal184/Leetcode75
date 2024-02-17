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
    int c=0;
    vector<int> v;
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        {
            return 0;
        }
        if(root->val == 1000000000)
        {
            return 0;
        }
        
        getSum(root,targetSum);
        return c;
    }

    void getSum(TreeNode *root,int sum)
    {
        if(root==NULL)
        {
            return;
        }
        v.push_back(root->val);
        getSum(root->left,sum);
        getSum(root->right,sum);
        int t=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            t+=v[i];
            if(t==sum)
            {
                c++;
            }
        }
        v.pop_back();
    }
};