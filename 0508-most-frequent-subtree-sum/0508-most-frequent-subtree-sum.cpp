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
    map<int,int>mpp;
    vector<int>ans;
    int max_freq=0;
    int rec(TreeNode* root){
        if(!root) return 0;
        int l=rec(root->left);
        int r=rec(root->right);
        int sum=l+r+root->val;
        mpp[sum]++;
        if(mpp[sum]>max_freq){
            max_freq=mpp[sum];
            ans.clear();
            ans.push_back(sum);
        }
        else if(mpp[sum]==max_freq){
            ans.push_back(sum);
        }
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
            rec(root);
            return ans;
    }
};