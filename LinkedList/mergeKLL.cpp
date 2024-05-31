/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* temphead = new ListNode(-1);
        ListNode* temptail = temphead;

        priority_queue<pair<int , ListNode*> , vector<pair<int , ListNode*>> , greater<pair<int , ListNode*>>>PQ;

        for(auto it : lists){
            if(it!=NULL){
                PQ.push({it->val , it});
            }
        }

        while(!PQ.empty()){
            
            ListNode* topnode=pq.top().second;
            pq.pop();

            if(topnode->next != NULL){
                PQ.push(topnode->next->val , topnode->next);
            }
            temptail->next=topnode;
            temptail=temptail->next;
        }
        return temphead->next;
    }
};