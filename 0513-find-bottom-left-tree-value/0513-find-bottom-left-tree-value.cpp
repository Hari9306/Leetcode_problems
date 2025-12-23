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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>Q;
        Q.push(root);
        int left_val;
        while(!Q.empty()){
            TreeNode* temp=Q.front();
            Q.pop();
            left_val=temp->val;
            if(temp->right) Q.push(temp->right);
            if(temp->left) Q.push(temp->left);
        }
        return left_val;
    }
};