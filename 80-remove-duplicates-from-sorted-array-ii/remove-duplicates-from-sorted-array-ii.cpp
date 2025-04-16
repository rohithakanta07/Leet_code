class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0 , j = 0;
        if(nums.size()==1) return nums.size();
        vector<int>v;
        while(j < nums.size()){
            if(i == j ) j++;
            if(j-i <=1 && nums[i] == nums[j] ){
                j++;
            }
            else if (nums[i]!=nums[j]){
                i=j;
                j++;
            }
            else{ 
                v.push_back(nums[j]);
                nums.erase(nums.begin() + j);
            }
        }
        // nums.insert(nums.end(),v.begin(),v.end());
        return nums.size();
    }
};