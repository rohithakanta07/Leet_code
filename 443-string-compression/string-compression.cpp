class Solution {
public:
    int compress(vector<char>& chars) {
        int c = 0;
        string st="";
        char s = chars[0];
        for(int i = 0 ; i < chars.size();i++){
            if(chars[i]==s){
                c++;
            }
            else{

                st+=s;
                s=chars[i];
                if(c==1){
                    c=1;
                }
                else{
                    st+=to_string(c);
                    c=1;
                }  
            }
        }
        st+=s;
        if(c!=1){
            st+=to_string(c);
        }

        for(int i = 0 ; i < st.size();i++){
            chars[i]=st[i];
        }
        return st.size();
    }
};