class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>r(m);
        vector<int>c(n);
        fill(r.begin(),r.end(),0);
        fill(c.begin(),c.end(),0);
        for(int i = 0 ; i < grid.size();i++){
            for(int j = 0 ; j < grid[0].size();j++){
                if(grid[i][j]==1){
                    r[i]+=1;
                    c[j]+=1;
                }
            }
        }
        int cnt =0 ;
        for(int i = 0 ; i < grid.size();i++){
            for(int j = 0 ; j < grid[0].size();j++){
                if(grid[i][j]==1){
                    if(r[i]>1 || c[j]>1){
                        cnt+=1;
                    }
                }
            }
        }
        return cnt;
    }
};