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
    bool isValidBST(TreeNode* root) {
        return recurfunc(root , LONG_MAX , LONG_MIN);
    }

    bool recurfunc(TreeNode* Root , long right , long left){
        if(!Root){
            return true;
        }

        if(Root->val > left && Root->val < right){
            return recurfunc(Root->left , Root->val , left) && recurfunc(Root->right , right , Root->val);
        }

        return false;
    }
};