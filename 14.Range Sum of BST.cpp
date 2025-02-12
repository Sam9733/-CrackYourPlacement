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
    int helper(TreeNode* root, int low, int high)
    {
        if(!root)
        return 0;
        if(root->val>=low&&root->val<=high)
        return root->val+helper(root->left,low,high)+helper(root->right,low,high);
        else if(root->val<low)
        return helper(root->right,low,high);
        else
        return helper(root->left,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return helper(root,low,high);
    }
};