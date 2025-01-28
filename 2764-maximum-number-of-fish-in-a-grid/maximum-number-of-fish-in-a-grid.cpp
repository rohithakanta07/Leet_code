class Solution {
public:
int dfs(int i , int j,int &sum,vector<vector<int>>&grid){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
        return 0;
    }
    if(grid[i][j]==0) return 0;
    sum+=grid[i][j];
    grid[i][j]=0;
    dfs(i+1,j,sum,grid);
    dfs(i-1,j,sum,grid);
    dfs(i,j+1,sum,grid);
    dfs(i,j-1,sum,grid);
    return sum;
}
    int findMaxFish(vector<vector<int>>& grid) {
        int ans=0;
        for(int i = 0 ; i<grid.size();i++){
            for(int j = 0 ; j<grid[0].size();j++){
                int sum=0;
                dfs(i,j,sum,grid);
                ans=max(ans,sum);
            }
        }
        return ans;

    }
};