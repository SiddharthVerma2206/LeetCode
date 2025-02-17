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
        void preOrder(TreeNode *root,int &ans,int digit){
            if(root == NULL){
                return ;
            }
            digit = (digit << 1) | root -> val;
            if(root -> left == NULL && root -> right == NULL){
                ans += digit;
                return ;
            }
            preOrder(root -> left,ans,digit);
            preOrder(root -> right,ans,digit);
        }
        int sumRootToLeaf(TreeNode* root) {
            int ans = 0;
            preOrder(root,ans,0);
            return ans;
        }
    };