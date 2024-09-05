class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(int i = 0 ; i<s.size();i++){
            if(s[i] == '#'){
                if (!st1.empty()) {
                    st1.pop(); 
                }
            }
            else{
                st1.push(s[i]);
                // cout<<st1.top()<<" ";
            }
        }
        cout<<endl;
        for(int i = 0 ; i<t.size();i++){
            if(t[i] == '#'){
                if (!st2.empty()) {
                    st2.pop(); 
                }
            }
            else{
                st2.push(t[i]);
                // cout<<st2.top()<<" ";
            }
        }
        while(!st1.empty() && !st2.empty()){
            char a = st1.top();
            char b = st2.top();
            if(a!=b){
                return false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if(!st1.empty() || !st2.empty()){
            return false;
        }
        else{
            return true;
        }
    }
};