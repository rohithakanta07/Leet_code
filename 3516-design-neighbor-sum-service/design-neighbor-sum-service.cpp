class NeighborSum {
public:
    unordered_map<int,pair<int,int>>mp;
    NeighborSum(vector<vector<int>>& grid) {
        // mp[-1]={grid.size(),grid[0].size()};
        for(int i = 0 ; i<grid.size();i++){
            for(int j = 0 ; j<grid[0].size();j++){
                mp[grid[i][j]]={i,j};
            }
        }

    }
    
    int adjacentSum(int value) {
        int s=0;
        if(mp.find(value)==mp.end()){
            return 0;
        }
       auto [row, col] = mp[value]; // given value indexes

     
       pair<int,int>top={row-1,col} , down={row+1,col}, left={row,col-1} , right={row,col+1};
       
       for(auto i : mp){
        if(i.second == top){
            s+=i.first;
        }
        if(i.second == down){
            s+=i.first;
        }
        if(i.second == left){
            s+=i.first;
        }
        if(i.second == right){
            s+=i.first;
        }
       }
       return s;
    }
    
    int diagonalSum(int value) {
        int s =0;
        auto [n,m]=mp[value];
        
        pair<int,int> d1 = {n-1,m-1} ,d2={n-1,m+1},d3={n+1,m-1} , d4={n+1,m+1};

        for(auto i :mp){
            if(i.second == d1){
                s+=i.first;
            }
            if(i.second == d2){
                s+=i.first;
            }
            if(i.second == d3){
                s+=i.first;
            }
            if(i.second == d4){
                s+=i.first;
            }
        }
        return s;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */