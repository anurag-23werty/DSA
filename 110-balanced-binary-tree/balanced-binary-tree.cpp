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
    bool isBalanced(TreeNode* root){
        if(root == nullptr) return true;
        return checkHeight(root);
    }
    bool checkHeight(TreeNode* root) {
        if(root == nullptr) return true;
        int lef = calHeight(root->left);
        int rig = calHeight(root->right);
        if(abs(lef-rig)>1) return false;
        return checkHeight(root->left) && checkHeight(root->right);
        
    }
    int calHeight(TreeNode* root){
        if(root==nullptr) return 0;
        int left = calHeight(root->left);
        int right = calHeight(root->right);
        return 1+max(left,right);

    }
};