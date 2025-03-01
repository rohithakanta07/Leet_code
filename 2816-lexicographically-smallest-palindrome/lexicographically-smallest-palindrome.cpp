class Solution {
public:
    string makeSmallestPalindrome(string s) {
        for(int i = 0 ; i < s.size()/2;i++){
            //s[i] s[s.size()-1-i]
            if((int)s[i] > (int)s[s.size()-1-i]){
                s[i]=s[s.size()-1-i];
            }
            else{
                 s[s.size()-1-i] = s[i];
            }
        }
        return s;
    }
};