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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* temp = head;
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        long long count = 0;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        // cout<<count;
        int k = count/2;

        ListNode* ref = head;
        ListNode* prev = NULL;
        int c = 0;
        while(ref != nullptr){
            if(c == k) break;
            c++;
            prev = ref;
            ref = ref->next;
            
        }
        if(ref != NULL){
            prev->next = ref->next;
            ref->next = NULL;
            delete ref;
        }

        return head;
    }
};