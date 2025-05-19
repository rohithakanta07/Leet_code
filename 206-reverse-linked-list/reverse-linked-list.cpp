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
    ListNode* reverseList(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        temp=dummy;
        for(int i = v.size()-1; i>=0 ; i--){
            ListNode* NN = new ListNode(v[i]);
            temp->next = NN;
            temp=NN;
        }
        return dummy->next;
    }
};