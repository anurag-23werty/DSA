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
    bool isStart(TreeNode* root,TreeNode* mini ,TreeNode* maxi){
        if(!root) return true;
        if(mini && mini->val >= root->val) return false;
        if(maxi && maxi->val<= root->val) return false;
        return isStart(root->left,mini,root) && isStart(root->right,root,maxi);

    }
    bool isValidBST(TreeNode* root) {
        return isStart(root,nullptr,nullptr);
        
    }
};