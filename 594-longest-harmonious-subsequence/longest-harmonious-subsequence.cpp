class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0 ; i < nums.size();i++){
            mp[nums[i]]++;
        }
        if(mp.size()==1){
            return 0;
        }
        int maxx = 0 ;
        
           for (auto it = mp.begin(); it != prev(mp.end()); ++it) {
            auto next_it = next(it); 
            if ((it->first - next_it->first) == -1) { // Check consecutive keys
                maxx = max(maxx, it->second + next_it->second);
            }
    }
        return maxx;
    }
        
};