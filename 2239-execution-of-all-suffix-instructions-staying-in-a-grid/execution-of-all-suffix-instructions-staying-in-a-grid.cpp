class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>v;
        for(int i = 0 ; i < s.size();i++){
            int summ = 0;
            int ai = startPos[0] , bj = startPos[1];
            for(int j = i ; j < s.size();j++ ){
                if(s[j]=='L'){
                    bj-=1;
                }
                else if(s[j]=='R')
                {
                    bj+=1;
                }
                else if(s[j]=='U')
                {
                    ai-=1;
                }else
                {
                    ai+=1;
                }
                if(0 <= ai && ai< n && 0 <= bj && bj <n){
                    summ+=1;
                }
                else{
                    break;
                }
               
            }
            v.push_back(summ);
        }   
        return v;
    }
};