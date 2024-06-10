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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0 ;
        return recur(preorder , inorder , index , 0 , inorder.size()-1);
    }

    TreeNode* recur(vector<int>& preor , vector<int>& inor, int& index , int i , int j){
        if(i>j){
            return NULL;
        }

        TreeNode* root = new TreeNode(preor[index]);

        int split =0;
        for(int i =0 ; i<inor.size() ; i++){
            if(preor[index]==inor[i]){
                split=i;
                break;
            }
        }

        index++;
        root->left=recur(preor , inor , index , i , split-1);
        root->right=recur(preor , inor , index , split+1 , j);
        return root;
    }
};