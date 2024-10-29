class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int i,j,k,c=0;
        for(i=0;i<nums.size()-2;i++){
            for(j=1;j<nums.size()-1;j++){
                for(k=2;k<nums.size();k++){
                    if(nums[j]-nums[i]==diff && nums[k]-nums[j] == diff){
                        c++;
                    }
                }
            }
        }
        return c;
    }
};