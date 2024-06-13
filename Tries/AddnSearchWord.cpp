struct TrieNode{
    unordered_map<char , TrieNode*>child;
    bool flag = false;
};

class WordDictionary {
public:
TrieNode*root;
    WordDictionary() {
        this->root=new TrieNode();
    }

    void addWord(string word) {
        TrieNode* node = root;
        for(char c : word){
            if(node->child.count(c)==0){
                node->child[c]=new TrieNode();
            }
            node = node->child[c];
        }
        node->flag=true;
    }
    
    bool searchinnode(string word , TrieNode* node){
       for (int i = 0; i < word.size(); i++) {
            char ch = word[i];
            if (!node->child.count(ch)) {
                if (ch == '.') {
                    for (auto x : node->child) {
                        TrieNode* child = x.second;
                        if (searchinnode(word.substr(i + 1), child)) {
                            return true;
                        }
                    }
                }
                return false;
            } else {
                node = node->child[ch];
            }
        }
        return node->flag;
    }


    bool search(string word) {
        return searchinnode(word,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */