class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1) return s.size();
        vector<bool>v(128, false);
        int i =0, j =0;
        int ans=0;
        while(j < s.size() ){
            while(v[s[j]] == true){
                v[s[i]]= false;
                i++;
            }

           v[s[j]]=true; 
          
           ans=max(ans,(j-i+1));
            j++;
        }
        return ans; 
    }
};