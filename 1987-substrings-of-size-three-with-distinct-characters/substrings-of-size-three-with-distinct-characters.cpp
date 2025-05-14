class Solution {
public:
    int countGoodSubstrings(string s) {
        map<char,int>mp;
        int c = 0,k=3;
        for(int i = 0 ; i < k ; i++){
            mp[s[i]]++;
        }
        if(mp.size()==k){
            c++;
        }
        for(int j = k ;j < s.size();j++){
             mp[s[j - k]]--;
            if(mp[s[j - k]] == 0) {
                mp.erase(s[j - k]);
            }
            mp[s[j]]++;
            if(mp.size() == k){
                c++;
            }
        }
        return c;
    }
};