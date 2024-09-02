class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        vector<int>v;
        stack<char>st;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if( s[i]==')')
            {
                int c = st.size();
                if(maxi<c){
                    maxi = c;
                }
                // v.push_back(st.size());
                st.pop();
            }
        }
        // for(int j = 0 ; j<v.size() ; j++)
        // {
        //     cout<<v[j];
        // }
        return maxi;
    }
};