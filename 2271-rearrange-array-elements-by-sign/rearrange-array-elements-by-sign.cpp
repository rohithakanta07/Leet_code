class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p,n,v;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }
            else{
                n.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i < nums.size()/2;i++){
            v.push_back(p[i]);
            v.push_back(n[i]);
        }
        return v;
    }
};