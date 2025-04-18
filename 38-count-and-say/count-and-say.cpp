class Solution {
public:
    string fn(int n , int ind ,string s){
        if(ind==n) return s;
        string s1="";
        if(ind==0) s1="1";
        else{
            int c = 1;
            for(int i = 1;i<s.length();i++){
                if(s[i]==s[i-1]){
                    c++;
                }
                else{
                    s1+=to_string(c)+s[i-1];
                    c=1;
                }
            }
            s1+=to_string(c)+s[s.size()-1];
        }


       return fn(n,ind+1,s1);
    }
    string countAndSay(int n) {
        string s = fn(n,0,"");
        return s;
    }
};