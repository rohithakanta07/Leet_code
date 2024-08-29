class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i = 0 ;
        vector<int>ans;
        while(i< nums.size()){
            if(nums[i]==target){
                ans.push_back(i);
            }
            i+=1;
            // if(nums[i]>target){
            //     break;
            // }
        }
        return ans;
    }
};