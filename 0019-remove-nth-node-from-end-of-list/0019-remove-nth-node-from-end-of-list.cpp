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
        ListNode* temp = head;
        int count = 1;
        
        if(head == NULL || head->next == nullptr) return NULL;

        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        if(count < n) return head;
        temp = head;
        int stop = count - n;
        count = 1;

        ListNode* prev = NULL;
        while(temp != NULL){
            if(count == stop) break;
            count++;
            prev = temp;
            temp = temp->next;
        }


        if(prev == NULL){
            head = temp->next;
            return head;
        }
        // if(temp->next) return head;
        prev->next = temp->next;
        temp->next = nullptr;
        delete temp;

        return head;
    }
};