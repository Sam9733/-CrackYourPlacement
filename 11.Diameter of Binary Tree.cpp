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
    int helper(TreeNode*root,int&ans)
    {
        if(!(root->left)&&!(root->right))
        return 0;
        else if(!(root->left))
        {
            int r=helper(root->right,ans);
            ans=max(ans,1+r);
            return 1+r;
        }
        else if(!(root->right))
        {
            int l=helper(root->left,ans);
            ans=max(ans,1+l);
        return 1+l;
        }
        else
        {
            int r=helper(root->right,ans);
             int l=helper(root->left,ans);
            ans=max(ans,2+r+l);
        return max(1+l,1+r);
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        helper(root,ans);
        return ans;
    }
};