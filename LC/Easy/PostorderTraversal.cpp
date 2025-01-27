class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        depthFirstSearch(root, result);
        return result;
    }
    
    void depthFirstSearch(TreeNode* node, vector<int>& result) {
        if (!node){
            return;
        }
        depthFirstSearch(node->left, result);      
        depthFirstSearch(node->right, result);     
        result.push_back(node->val); 
    }
};