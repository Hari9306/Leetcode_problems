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
    TreeNode* inorder(TreeNode * root){
        if(!root) return NULL;
        if(root->val ==0 && !root->left  && !root->right) return NULL;
        root->left=inorder(root->left);
        root->right=inorder(root->right);
        if(root->val==0 && !root->left && !root->right) return NULL;
        return root;
    }
    TreeNode* pruneTree(TreeNode* root) {
        return inorder(root);
    }
};