class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        for(int i = 0 ; i<edges.size();i++){
            for(int j = 0 ; j < edges[0].size();j++){
                if(edges[i][j] == edges[i+1][0] or edges[i][j]==edges[i+1][1]){
                    return edges[i][j];
                }
            }
        }
        return 0;
    }
};