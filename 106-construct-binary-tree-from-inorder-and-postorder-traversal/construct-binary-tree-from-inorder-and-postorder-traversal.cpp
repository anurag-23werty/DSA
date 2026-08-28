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
private:
    unordered_map<int,int>mp;
public:
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,int& rootInd,int left,int right){
        if(left>right) return nullptr;
        int pivot = mp[postorder[rootInd]];
        rootInd--;
        TreeNode* node = new TreeNode(inorder[pivot]);
        
        node->right = build(inorder,postorder,rootInd,pivot+1,right);
        node->left = build(inorder,postorder,rootInd,left,pivot-1);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        int rootInd = postorder.size() - 1;
        return build(inorder, postorder,rootInd,0,inorder.size()-1);
        
        
    }
};