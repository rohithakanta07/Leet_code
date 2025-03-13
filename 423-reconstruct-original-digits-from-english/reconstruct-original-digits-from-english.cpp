class Solution {
public:
    string originalDigits(string s) {
     vector<string>vec={"zero","two","four","six","eight","one","thre","five","sevn","nie"};
        vector<vector<int>>dp={{0,1,1,1,1},{2,1,1,1},{4,1,1,1,1},{6,1,1,1},{8,1,1,1,1,1},{1,1,1,1},{3,1,1,1,2},{5,1,1,1,1},{7,1,2,1,1},{9,2,1,1}};
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']+=1;
        }
        string res="";
        vector<int>temp(10,0);
        for(int i=0;i<10;i++){
            bool flag=true;
            int c=INT_MAX;
            for(int j=0;j<vec[i].size();j++){
                int x=v[vec[i][j]-'a'];
                if(x<dp[i][j+1]){
                    flag=false;
                }
                c=min(c,x);
                // c=x;
            }
            if(flag){
                for(int j=0;j<vec[i].size();j++){
                    v[vec[i][j]-'a']-=c;
                }
                temp[dp[i][0]]+=c;
            }
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<temp[i];j++){
                res+=to_string(i);
            }
        }
        return res;   
    }
};