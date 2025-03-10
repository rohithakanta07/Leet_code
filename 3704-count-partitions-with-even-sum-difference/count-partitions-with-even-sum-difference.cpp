class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int a = 0,b=0;
        for(int i = 0 ; i<nums.size();i++){
            a+=nums[i];
        }
        int c = 0;
        for(int i = 0 ; i < nums.size()-1;i++){
            a-=nums[i];
            b+=nums[i];
            if((abs(a-b))%2 == 0){
                c+=1;
            }
        }
        return c;
    }
};