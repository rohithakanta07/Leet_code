class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>v;
        string ans="";
        for(int i = 0 ; i < target.size();i++){
            char  c = 'a';
            while(target[i]!=c){
                ans+=c;
                c++;
                v.push_back(ans);
                ans.erase(ans.size()-1);
            }
            ans+=target[i];
            v.push_back(ans);
        }
        return v;
    }
};