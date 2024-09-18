class Solution {
public:
    string reverseVowels(string s) {

        map<char,int>mp;
        int i = 0 ;
        int j = s.size()-1;
        mp['A'] = 1;
        mp['a'] = 1;
        mp['E'] = 1;
        mp['e'] = 1;
        mp['I'] = 1;
        mp['i'] = 1;
        mp['O'] = 1;
        mp['o'] = 1;
        mp['U'] = 1;
        mp['u'] = 1;
        while(i<j){
            if(mp[s[i]]!=1){
                i++;
            }
            if(mp[s[j]]!=1){
                j--;
            }
            if(mp[s[i]]==1 && mp[s[j]]==1){
                char temp = s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
        }
        return s;
    }
};