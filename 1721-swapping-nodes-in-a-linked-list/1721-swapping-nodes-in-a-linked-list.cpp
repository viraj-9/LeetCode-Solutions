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
    int findLen(ListNode* head){
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* t1 = NULL;
        ListNode* t2 = NULL;
        ListNode* temp = head;
        int count1 = 0;
        int len = findLen(head);
        

        while(temp != NULL){
            count1++;
            if(count1 == k){
                t1 = temp;
            }
            if(count1 == len-k+1){
                t2 = temp;  
            }
            temp = temp->next;
        }

        int s = 0;
        s = t1->val;
        t1->val = t2->val;
        t2->val = s;
        return head;
    }
};