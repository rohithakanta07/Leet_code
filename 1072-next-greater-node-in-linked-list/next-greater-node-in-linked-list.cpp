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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        stack<int>st;
        for(int i = v.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(v[i]);
                v[i]=0;
            }
            else{
                if(st.top() > v[i]){
                    int a = v[i];
                    v[i]=st.top();
                    st.push(a);
                }
                else{
                    while( !st.empty() && st.top()<=v[i] ){
                        st.pop();
                    }
                    if(!st.empty()){
                        int a = v[i];
                        v[i]=st.top();
                        st.push(a);
                    }
                    else{
                        st.push(v[i]);
                        v[i]=0;
                    }
                }
            }
        }
        return v;

    }
};