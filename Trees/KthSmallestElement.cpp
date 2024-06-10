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
    int kthSmallest(TreeNode* root, int k) {
        if(!root){
            return 0;
        }
        priority_queue<int , vector<int> , greater<int>>q;
        dfs(root , q);
        for(int i =1 ; i<k ; i++){
            q.pop();
        }
        return q.top();
    }

    void dfs(TreeNode* node , priority_queue<int , vector<int> , greater<int>>& Q){
        if(node==NULL){
            return ;
        }
        Q.push(node->val);
        dfs(node->left , Q);
        dfs(node->right , Q);
    }
};