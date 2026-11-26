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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        int count = 0;
        stack<int> st;

        while(temp != NULL){
            count++;
            if(count >= left && count <= right){
                st.push(temp->val);
            }
            temp = temp->next;
        }
        temp = head;
        count = 0;
        while(temp != NULL){
            count++;
            if(count >= left && count <= right){
                temp->val = st.top();
                st.pop();
            }
            temp = temp->next;
        }

        return head;

    }
};