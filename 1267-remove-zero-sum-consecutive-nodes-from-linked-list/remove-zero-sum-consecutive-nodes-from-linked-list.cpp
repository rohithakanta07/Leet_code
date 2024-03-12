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
    ListNode* removeZeroSumSublists(ListNode* head) {
       vector<int> v;
            ListNode *temp = head;
            while (temp != NULL)
            {
                v.push_back(temp->val);
                temp = temp->next;
            }
            for (int i = 0; i < v.size(); i++)
            {
                int sum = 0;
                for (int j = i; j < v.size(); j++)
                {
                    sum += v[j];
                    if (sum == 0)
                    {
                        for (int k = i; k <= j; k++)
                        {
                            v[k] = 0;
                        }
                        break;
                    }
                }
            }
            ListNode*dummy=new ListNode(-1);
            ListNode*ans=dummy;
            for(int i=0;i<v.size();i++){
                if(v[i]!=0){
                    ans->next=new ListNode(v[i]);
                    ans=ans->next;
                }
            }
            ans->next=NULL;
            return dummy->next;  
    }
};