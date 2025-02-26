class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int s=0,res=abs(nums[0]),mi=nums[0],ma=nums[0];
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            res=max(res,abs(s));
            if(s>=0){
                int ele=s-mi;
                res=max(res,abs(ele));
            }else{
                int ele=s-ma;
                res=max(res,abs(ele));
            }
            mi=min(s,mi);
            ma=max(s,ma);
        }
        return res;
    }
};