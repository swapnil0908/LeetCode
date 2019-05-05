/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || head->next == NULL || k<=1){return head;}
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next;
        int count = 0;
        int num=0;
        while(curr!=NULL){
            curr = curr->next;
            num++;
        }
        if(num<k)
            return head;
        curr = head;
        while(curr!=NULL && count<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if(next != NULL && num-count>=k){
            head->next = reverseKGroup(next,k);
        }
        else if(num-count < k){
            head->next = next;
        }
        
        
        return prev;
        
    }
};