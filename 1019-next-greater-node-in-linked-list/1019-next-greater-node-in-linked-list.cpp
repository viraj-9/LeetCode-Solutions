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
    int insertNode(ListNode* head){
        if(head == NULL || head->next == nullptr) return 0;
        ListNode* temp = head;
        int data = head->val;
        while(temp != NULL){
            if(temp->next != NULL && temp->next->val > data){
                return temp->next->val;
            }
            temp = temp->next;
        }
        return 0;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;
        ListNode* temp = head;
        while(temp != NULL){
            res.push_back(insertNode(temp));
            temp = temp->next;
        }
        return res;
    }
};