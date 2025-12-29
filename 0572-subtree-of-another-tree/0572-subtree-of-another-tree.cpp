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
    bool issame(TreeNode* p,TreeNode* q){
        if(!p && !q) return true;
        if(!p || !q) return false;
        if(p->val!=q->val) return false;
        return issame(p->left,q->left) && issame(p->right,q->right);
    }
    bool rec(TreeNode* p,TreeNode* q){
        if(!p) return false;
        if(issame(p,q)) return true;
        return rec(p->left,q) || rec(p->right,q);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return rec(root,subRoot);
    }
};