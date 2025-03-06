class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long summ=0,cost=0;
        long long l = 0 , r = 0,cnt=0;
        long long maxx=0;
        while( r<nums.size()){
            summ+=nums[r];
            cost=nums[r] * (r - l + 1)-summ;
            if(cost<=k){
                maxx=max(r-l+1,maxx);
                r++;
            }
            else{
                summ-=nums[l];
                l++;
                r++;
            }
            

        }
        return maxx;
    }
};