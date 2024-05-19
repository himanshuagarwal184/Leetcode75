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
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        TreeNode *root=new TreeNode(preorder[0]);
        TreeNode *ptr=root;
        for(int i=1;i<preorder.size();i++)
        {
            ptr=root;
            for(int j=0;j<i;j++)
            {
                if(preorder[i]<ptr->val)
                {
                    if(ptr->left!=NULL)
                    {
                        ptr=ptr->left;
                    }
                    else
                    {
                        TreeNode *node=new TreeNode(preorder[i]);
                        ptr->left=node;
                        break;
                    }
                }
                else
                {
                    if(preorder[i]>ptr->val)
                    {
                        if(ptr->right!=NULL)
                        {
                            ptr=ptr->right;
                        }
                        else
                        {
                            TreeNode *node = new TreeNode(preorder[i]);
                            ptr->right=node;
                        }
                    }
                }
            }
        }
        return root;
    }
};