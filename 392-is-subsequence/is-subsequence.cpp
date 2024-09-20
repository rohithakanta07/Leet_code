class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 ;
        int j = 0 ;
        int c = 0 ;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
                c+=1;
            }
            else{
                j++;
            }
        }
        if(c==s.size()){
            return true;
        }
        else{
            return false;
        }
    }
};