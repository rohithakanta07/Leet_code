class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        map<char,int>mp;
        vector<int>v;
        for(int i = 0 ; i < nums.size();i++){
            vector<int>a;
            while(nums[i]>0){
                a.push_back(nums[i]%10);
                nums[i]/=10;
            }
            reverse(a.begin(),a.end());
            v.insert(v.end(),a.begin(),a.end());
        }
        return v;
        
    }
};