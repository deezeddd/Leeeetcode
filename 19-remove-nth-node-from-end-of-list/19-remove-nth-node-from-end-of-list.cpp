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
   
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur=head;
       ListNode* temp=new ListNode(-1);
        temp->next=head;
       head=temp;
        
        ListNode* prev=head;
        n--;
        while(n){
            cur=cur->next;
            n--;
        }
        if(!cur)return NULL;
        
        
        while(prev->next&&cur->next ){
            prev=prev->next;
            cur=cur->next;
        }
        //head
       
        //normal
    
        prev->next=prev->next->next;
        return head->next;
    }
};
