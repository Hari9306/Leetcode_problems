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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int lev=0;
        while(!q.empty()){
            int n=q.size();
            vector<TreeNode*> temp;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                temp.push_back(node);
                if(node->left)q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(lev & 1){
                int l=0;
                int r=temp.size()-1;
                while(l < r){
                    swap(temp[l]->val,temp[r]->val);
                    l++;
                    r--;
                }
            }
            lev++;
        }
        return root;
    }
};