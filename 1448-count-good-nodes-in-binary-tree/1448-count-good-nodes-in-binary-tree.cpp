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
    int rec(TreeNode* root, int max_val){
        if(!root) return 0;
        int cnt=(root->val >= max_val);
        max_val=max(max_val,root->val);
        return cnt + rec(root->left,max_val)+rec(root->right,max_val);
    }
    int goodNodes(TreeNode* root) {
        return rec(root,INT_MIN);
    }
};