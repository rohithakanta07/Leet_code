class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
        while(l<=r){
            int s = 0;
            for(int i = 0 ; i<l ; i++){
                s+=nums[i];
            }
            if(s>0) ans=min(ans,s);
            for(int j = l ; j<nums.size();j++){
                s-=nums[j-l];
                s+=nums[j];
                if(s>0) ans=min(ans,s);
            }
            l++;
        }
        return ans==INT_MAX ?  -1 :  ans;
    }
};