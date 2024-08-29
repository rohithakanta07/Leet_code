class Solution {
public:

    int bsrch(vector<int>&smallarr ){
        int val = 0 ;
        for(int j = 0 ; j<smallarr.size();j++){
            if(smallarr[j]<0){
                val+=1;
            }
        }
        return val;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int c = 0 ;
        for(int i = 0 ; i < grid.size() ; i ++){
            int s = bsrch(grid[i]);
            c+=s;
        }
        return c;
    }
};