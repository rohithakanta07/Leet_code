class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        vector<vector<int>>res;
        queue<pair<int,int>>q;
        for(int i=0;i<isWater.size();i++){
            vector<int>ex;
            for(int j=0;j<isWater[0].size();j++){
                if(isWater[i][j]==1){
                    ex.push_back(0);
                    q.push({i,j});
                }else{
                    ex.push_back(-1);
                }
            }
            res.push_back(ex);
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(i-1>=0 and res[i-1][j]==-1){
                res[i-1][j]=res[i][j]+1;
                q.push({i-1,j});
            }
            if(i+1<res.size() and res[i+1][j]==-1){
                res[i+1][j]=res[i][j]+1;
                q.push({i+1,j});
            }
            if(j-1>=0 and res[i][j-1]==-1){
                res[i][j-1]=res[i][j]+1;
                q.push({i,j-1});
            }
            if(j+1<res[0].size() and res[i][j+1]==-1){
                res[i][j+1]=res[i][j]+1;
                q.push({i,j+1});
            }
        }
        return res;
    }
};