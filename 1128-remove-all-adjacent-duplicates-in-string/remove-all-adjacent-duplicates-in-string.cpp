class Solution {
public:
    string removeDuplicates(string s) {
    stack<char>st;
    for(int i = 0 ; i <s.size();i++)
    {
        if(st.empty()){
            st.push(s[i]);
            // cout<<st.top();
        }
        else{
            if(st.top()==s[i])
            {
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    string ans="";
    // cout<<st.size()<<endl;
    while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
    }
    return ans;
    }
};