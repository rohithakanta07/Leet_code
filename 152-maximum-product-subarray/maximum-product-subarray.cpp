class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = 1 ;
        int maxx = INT_MIN;
        int ngc=0,p1=1,r=0;
        while(r<nums.size()){
            prod=prod*nums[r];
            maxx=max(maxx,prod);
            if(nums[r]==0){
                prod=1;
                ngc=0;
                p1=1;
            }
            else if(nums[r]<0){
                ngc+=1;
                if(ngc==1){
                    p1=prod;
                }
                else if(ngc%2!=0){
                    maxx=max(maxx,prod/p1);
                }
            }
            else if(ngc%2!=0){
                maxx=max(maxx,prod/p1);
            }
            r+=1;
        }
        return maxx;
    }
};