class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v1(nums.size(),1);
        int i1=1;
        int i2=1;
        for(int i = 0 ; i<nums.size();i++)
        {
            v1[i]=v1[i]*i1;
            i1*=nums[i];
        }
        for(int j=nums.size()-1 ; j>=0 ; j--){
            v1[j]=v1[j]*i2;
            i2*=nums[j];
        }
        return v1;
    }
};