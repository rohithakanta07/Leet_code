class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1 ; 
        int ele=nums[0];
        vector<int>arr;
        arr.push_back(nums[0]);
        while(i < nums.size() ){
            if(ele!= nums[i]){
                ele = nums[i];
                arr.push_back(nums[i]);
            }
            i++;
        }
        for(int i = 0 ; i < arr.size();i++){
            nums[i] = arr[i];
        }
        return arr.size();
    }
};