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
    bool rec(TreeNode* root,long long  l,long long  r){
        if(!root) return true;
        if(root->val > l && root->val < r){
            return rec(root->left,l,root->val) && rec(root->right,root->val,r);
        }
        else {
        return false;
        }
    }
    bool isValidBST(TreeNode* root) {
       return rec(root,LLONG_MIN,LLONG_MAX);
    }
};