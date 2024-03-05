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
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        int len=0;
        while(temp != NULL)
        {
            temp=temp->next;
            len++;
        }
        temp = head;
        int t = len-n;
        if (t<0){
            return NULL;
        }
        int pos=0;
        ListNode* dummy = new ListNode(0);
        ListNode* head2 = dummy;
        while(len != 0  && temp != NULL)
        {
            if(pos == t){
                temp=temp->next;
            }
            else{
                ListNode* NN = new ListNode(0);
                NN->val = temp->val;
                dummy->next = NN;
                dummy = NN;
                temp=temp->next;
            }
            len--;
            pos++;
        }
        head2 = head2->next;
        return head2;

    }
};