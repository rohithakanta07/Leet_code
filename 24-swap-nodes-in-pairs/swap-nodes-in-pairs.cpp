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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next == nullptr){
            return head;
        }
        ListNode* temp=head;
        ListNode* a=NULL;
        ListNode* b=NULL;
        int c = 0;
        while(temp ){
            c++;
            if(c==1){
                a = temp;
            }
            if(c == 2){
                b = temp;
                swap(a->val,b->val);
                c = 0;
            }
            temp=temp->next;
        }
        return head;
    }
};