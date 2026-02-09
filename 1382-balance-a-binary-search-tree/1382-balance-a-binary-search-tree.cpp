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
    void Inorder(TreeNode* root,vector<int>&ans){
        if(!root) return ;
        Inorder(root->left,ans);
        ans.push_back(root->val);
        Inorder(root->right,ans);
    }
    TreeNode* rec(int start,int end,vector<int>& ans){
        if(start>end) return NULL; 
        int mid=(start+end) >> 1;
        TreeNode* temp=new TreeNode(ans[mid]);
        temp->left=rec(start,mid-1,ans);
        temp->right=rec(mid+1,end,ans);
        return temp;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        Inorder(root,ans);
        return rec(0,ans.size()-1,ans);
    }
};