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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummyhead = head ;
        ListNode* prevnode=NULL;
        while(dummyhead!=NULL){
        ListNode * kthnode = findkthnode(dummyhead , k);
        if(kthnode==NULL){
            if(prevnode){prevnode->next=dummyhead;}
            break;
        }
        ListNode* nextnode=kthnode->next;
        kthnode->next = NULL;
        reverseLL(dummyhead);
        if(dummyhead==head){
            head=kthnode;
        }else{
            prevnode->next=kthnode;
        }
        prevnode=dummyhead;
        dummyhead=nextnode;
    }
    return head;
    }
    ListNode* findkthnode(ListNode* temp , int k){
        k--;
        while(temp!=NULL && k>0){
            temp=temp->next;
            k--;
        }
        return temp;
    }

    void reverseLL(ListNode* temphead){
        ListNode* prev = NULL;
        while(temphead){
            ListNode* next=temphead->next;
            temphead->next=prev;
            prev=temphead;
            temphead=next;
        }
    }
};