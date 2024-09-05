class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        int i = 0 ;
        while(word[i]!=ch && i<word.size()){
            st.push(word[i]);
            if(i==word.size()-1){
                return word;
                break;
            }
            i+=1;
        }
        st.push(word[i]);
        // cout<<st.top()<< " " << i;
        string s ="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        for(int j = i+1 ; j<word.size();j++){
            s+=word[j];
        }
        return s;
        // return "";
    }
};