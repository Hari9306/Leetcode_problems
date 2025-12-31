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
    vector<vector<int>> ans;
    void dfs(TreeNode* node,vector<int>& res,int resum){
        if(!node) return ;
        res.push_back(node->val);
        if(!node->left && !node->right && resum==node->val) ans.push_back(res); 
        dfs(node->left,res,resum-node->val);
        dfs(node->right,res,resum-node->val);
        res.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> res;
        dfs(root,res,targetSum);
        return ans;
    }
};