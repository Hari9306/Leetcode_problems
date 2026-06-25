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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* node=new TreeNode(val);
            node->left=root;
            return node;
        }
        queue<TreeNode*> q;
        q.push(root);
        int level=1;
        while(!q.empty()){
            int size=q.size();
            if(level==depth-1){
                for(int i=0;i<size;i++){
                    TreeNode* node=q.front();
                    q.pop();
                    TreeNode* l=node->left;
                    TreeNode* r=node->right;
                    node->left=new TreeNode(val);
                    node->right=new TreeNode(val);
                    node->left->left=l;
                    node->right->right=r;
                }
                break;
            }
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            level++;
        }
        return root;
    }
};