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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        if(root==NULL){return res;}
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>tempv;
            int siz = q.size();
           while(siz--){
                TreeNode* tempnode = q.front();
                q.pop();
                tempv.push_back(tempnode->val);
                if(tempnode->left){q.push(tempnode->left);}
                if(tempnode->right){q.push(tempnode->right);}
            }
            res.push_back(tempv.back());
        }
        return res;
    }
};