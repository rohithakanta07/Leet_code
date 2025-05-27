class Solution {
public:
    // int lcs(int i1 , int i2 , string s1, string s2 ,vector<vector<int>>&dp ){
    //     //basecase 
    //     if(i1 < 0 || i2 < 0 ) return 0;
         
    //     if(dp[i1][i2] != -1) return dp[i1][i2]; 
    //     //both indexes are matched

    //     if(s1[i1] == s2[i2]) return dp[i1][i2] = 1+ lcs(i1-1 , i2-1 , s1, s2,dp);
    //     //unmatched
    //     return dp[i1][i2] =  max(lcs(i1 , i2-1 , s1, s2,dp) , lcs(i1-1 , i2 , s1, s2,dp));
    // }
    int longestCommonSubsequence(string text1, string text2) {
        // vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),-1));
        // return lcs(text1.size()-1,text2.size()-1,text1,text2 ,dp);

        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1] == text2[j-1])dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};