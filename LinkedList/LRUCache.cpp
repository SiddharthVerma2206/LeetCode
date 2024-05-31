
class LRUCache {
public:
    struct Node{
        Node* next;
        Node* prev;
        int val;
        int key;
    Node(int k, int valu):prev(NULL),next(NULL),key(k),val(valu){};
    };
        unordered_map<int , Node*>mp;
        int cap;
        Node* head=new Node(-1 , -1);
        Node* tail=new Node(-1 , -1);

    void deleteNode(Node* nodetodelete){
        Node* front=nodetodelete->next;
        Node* back=nodetodelete->prev;
        back->next=front;
        front->prev=back;
    }


    void addNode(Node* nodetoadd){
        Node* front=head->next;
        nodetoadd->next=front;
        nodetoadd->prev=head;
        head->next=nodetoadd;
        front->prev=nodetoadd;
    }
    LRUCache(int capacity) {
        cap = capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node* resultnode = mp[key];
            int result = resultnode->val;
            mp.erase(key);
            deleteNode(resultnode);
            addNode(resultnode);
            mp[key]=head->next;
            return result;
        }
            return -1;
    }
    
    void put(int key, int val) {
        if(mp.find(key)!=mp.end()){
            Node* Existingnode = mp[key];
            mp.erase(key);
            deleteNode(Existingnode);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key , val));
        mp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,val);
 */