/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node* , Node*>mp;
        Node* tempnode = head;
        while(tempnode){
            mp[tempnode]= new Node(tempnode->val);
            tempnode=tempnode->next;
        }
        tempnode=head;

        while(tempnode){
            Node* NewListnode = mp[tempnode];
            NewListnode->next=mp[tempnode->next];
            NewListnode->random=mp[tempnode->random];
            tempnode=tempnode->next;
        }
        return mp[head];

    }
};