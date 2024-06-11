/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream out ;
        encode(root , out);
        return out.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream in(data);
        return decode(in);
    }

private:
    void encode(TreeNode* node , ostringstream& out){
        if(node==NULL){
            out<<"N ";
            return;
        }

        out << node->val << " ";

        encode(node->left , out);
        encode(node->right , out);
    }
    
   TreeNode* decode(istringstream& in) {
        string value = "";
        in >> value;
        
        if (value == "N") {
            return NULL;
        }
        
        TreeNode* root = new TreeNode(stoi(value));
        
        root->left = decode(in);
        root->right = decode(in);
        
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));