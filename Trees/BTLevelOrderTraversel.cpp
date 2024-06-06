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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL){return ans;}
        q.push(root);
        while(!q.empty()){
            vector<int>tempv;
            int count = q.size();
            for(int i =0 ; i<count ; i++){
                TreeNode* temp = q.front();
                q.pop();
                tempv.push_back(temp->val);
                if(temp->left != NULL){q.push(temp->left);}
                if(temp->right){q.push(temp->right);}
            }
            ans.push_back(tempv);
        }
        return ans;
    }
};