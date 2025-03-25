class Solution {
public:
bool merge(vector<pair<int,int>>& r){
        int count=1;
        int x=r[0].first;
        int y=r[0].second;
        for(int i=1;i<r.size();i++){
            if(y<=r[i].first){
                x=r[i].first;
                y=r[i].second;
                count++;
            }
            else{
                x = min(x,r[i].first);
                y = max(y,r[i].second);
            }
        }
        return count>=3;
    }
   
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        
         
        vector<pair<int,int>>high;
        vector<pair<int,int>>low;

        for(int i=0;i<rectangles.size();i++){
            high.push_back({rectangles[i][1],rectangles[i][3]});
            low.push_back({rectangles[i][0],rectangles[i][2]});
        }
        sort(high.begin(),high.end());
        sort(low.begin(),low.end());
        return merge(high) or merge(low);
    }
};