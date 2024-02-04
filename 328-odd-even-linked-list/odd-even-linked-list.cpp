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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;
        vector<int>v;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        temp = head ;
        ListNode* head2 = NULL;
        ListNode* temp2 = head2;
        for( int i = 0 ; i < v.size() ; i+=2)
        {
            ListNode* NN = new ListNode(temp->val);
            NN->val = v[i];
            if(head2 == NULL)
            { 
                head2=NN;
                temp2=head2;
            }
            else{
                temp2->next = NN;
                temp2=temp2->next;
            }
        }
        for(int i = 1 ; i < v.size() ; i+=2 )
        {
            ListNode* NN = new ListNode(temp->val);
            NN->val = v[i];
            temp2->next = NN;
            temp2=temp2->next;
        }
        return head2;
    }
};