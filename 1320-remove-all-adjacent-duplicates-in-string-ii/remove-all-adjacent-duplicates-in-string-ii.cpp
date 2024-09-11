class Solution {
public:
    string removeDuplicates(string s, int k) {
        // stack<char>st1;
        // for(int i = 0 ; i < k; i++){
        //     st1.push(s[i]);
        // }
        // stack<char>st2;
        // for(int i = k; i<s.size();i++)
        // {
        //     if(!st1.empty() and s[i]!= st1.top()){
        //         // while(!st2.empty()){
        //         //     st1.push(st2.top());
        //         //     st2.pop();
        //         // }
        //         st1.push(s[i]);
        //     }
        //     else if(!st1.empty() and s[i]== st1.top()){
        //             // st2.push(st1.top());
        //             // st1.pop();
        //             // if(k-1 == st2.size()){
        //                 while(!st1.empty() and s[i]== st1.top() and st2.size()<k){
        //                     st2.push(s[i]);
        //                     st1.pop();
        //                 }
        //                 if(st2.size()==k-1){
        //                     st2=stack<char>();
        //                 }
        //                 else{
        //                     while(!st2.empty()){
        //                         st1.push(st2.top());
        //                         st2.pop();
        //                     }
        //                     st1.push(s[i]);
        //                 }
        //             // }
        //         }
        //         else{
        //             st1.push(s[i]);
        //         }
        // }
        // string ans="";
        // while(!st1.empty()){
        //     ans+=st1.top();
        //     st1.pop();
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;

        stack<pair<char,int>> st1;
        stack<pair<char,int>> st2;
        string ans="";
        for(int i = 0 ; i < s.size();i++){
            if(st1.empty()){
                st1.push({s[i] , 1});
            }
            else{
                // auto top = st1.top();
                if(st1.top().first == s[i]){
                    st1.top().second++;
                }
                else{
                    st1.push({s[i] , 1});
                }
                if(st1.top().second == k){
                    st1.pop();
                }
            }
        }
        while(!st1.empty()){
            for(int i = 0 ; i < st1.top().second;i++){
                ans+=st1.top().first;
            }
            st1.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};