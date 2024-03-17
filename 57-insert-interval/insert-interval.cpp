class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& inter) {
        intervals.push_back(inter);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;

        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(ans.back()[1]<intervals[i][0])
            {
                ans.push_back(intervals[i]);
                continue;
            }
            ans.back()[1]=max(intervals[i][1],ans.back()[1]);
        }
        return ans;
    }
};