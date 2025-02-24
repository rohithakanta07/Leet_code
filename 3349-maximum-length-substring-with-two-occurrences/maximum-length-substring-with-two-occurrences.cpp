class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int maxx=0,li=0;
       for(int ri = 0 ; ri<s.size();ri++){
        mp[s[ri]]++;
        while(mp[s[ri]]>2){
            mp[s[li]]--;
            li+=1;
        }
        maxx=max(maxx,ri-li+1);
       }
       return maxx;
    }
};