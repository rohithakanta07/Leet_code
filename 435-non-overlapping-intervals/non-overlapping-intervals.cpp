class Solution {
public:
    static bool comp(vector<int>&v1 , vector<int>&v2){
        return v1[1]<v2[1]; 
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end(), comp);
        int c = 1; 
        int lastendTime= intervals[0][1];
        for(int i = 0 ; i < intervals.size();i++){
            if(intervals[i][0] >= lastendTime){
                c++;
                lastendTime = intervals[i][1];
            }
        }
        cout<<c;
        return intervals.size() - c;
        
        // return 0 ;
    }
};