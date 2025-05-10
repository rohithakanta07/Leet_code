class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxx = 0;
        int r = 0,c=0;
        for(int i = mat.size()-1 ; i >=0 ; i--){
             c = 0;
            for(int j = 0 ; j < mat[0].size() ; j++){
                if(mat[i][j] ==  1){
                    c++;
                }
            }
            if(c >= maxx) r=i;
            // cout<<c<<" "<<maxx<<endl;
            maxx= max(maxx,c);
        }
        vector<int>v;
        v.push_back(r);
        v.push_back(maxx);
        return v;
    }
};