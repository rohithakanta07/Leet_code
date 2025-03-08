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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        for(int i = 0 ; i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        int a =k-1 , b = v.size()-k;
        cout<<a<<" "<<b;
        swap(v[a],v[b]);
        // bool flag = true;
        int c = 0;
         while(temp  ){
            if(c == a){
                temp->val = v[a];
            }
            if(c == b){
                temp->val = v[b];
            }
            c++;
            temp=temp->next;
        }
        // for(int i = 0 ; i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        return head;
    }
};