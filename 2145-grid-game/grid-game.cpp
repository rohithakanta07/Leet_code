class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        // for(int i = 0 ; i < grid.size();i++){
        //     int sum = 0 ;
        //     for (int j = 1 ; j<grid[0].size();j++){
        //         grid[i][j]=grid[i][j-1]+grid[i][j];
        //         cout<<grid[i][j]<<" ";
        //     } 
        // }
        vector<vector<long long>>presum;
        for(int i=0;i<grid.size();i++){
            vector<long long>v;
            long long s=0;
            for(int j=0;j<grid[0].size();j++){
                s+=grid[i][j];
                v.push_back(s);
            }
            presum.push_back(v);
        }
        long long res=LLONG_MAX;
        long long val=presum[0][presum[0].size()-1] - presum[0][0];
        res=min(res,val);
        long long ans=LLONG_MIN;
        for(int i = 1 ; i<presum[0].size();i++){
           ans=max((presum[0][presum[0].size()-1] - presum[0][i]), (presum[1][i-1]));
           res=min(res,ans);
        }
        return res;
    }
};