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
    int maxLevelSum(TreeNode* root)
    {
        queue<TreeNode*>q;
        int MaxLevel=1,level=1,maxx=INT_MIN;
        q.push(root);
        while(!q.empty())
        {
            int lvlSum=0;
            queue<TreeNode*>a;
            while(!q.empty())
            {
                TreeNode *curr=q.front();
                q.pop();
                lvlSum+=curr->val;
                if(curr->left!=NULL)
                {
                    a.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    a.push(curr->right);
                }
            }
            if(lvlSum > maxx)
            {
                maxx=lvlSum;
                MaxLevel=level;
            }
            level++;
            q=a;
        }    
        return MaxLevel;
    }
};